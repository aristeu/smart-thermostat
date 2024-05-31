include <BOSL/constants.scad>
use <BOSL/masks.scad>
use <BOSL/transforms.scad>

// Everything in mm

// Minimum angle
$fa = 0.1;

// Minimum size
$fs = 0.1;

/* configuration */
// 3D printing clearance
clearance = 0.2;

// Thickness of walls
wall_width = 2.5;

// Board + display width (front is USB C connector)
width = 101.49;

// Board + display depth
depth = 83.42;

// Board + display height. See 'L1 offset' for the height offset for the L1 capacitor
height = 18.5;

// Distance from the left side to the beginning of the USB C connector
usbc_from_left = 54.362;

// How hight it is from the base of the board
usbc_from_bottom = 4.74;

// height of the lid lip: need to make sure it won't hit anything
lid_lip_height = 3;

// (Actual) Display width (for display opening)
display_width = 64.8;

// Display depth
display_depth = 48.6;

// Distance from the left to the beginning of the display
display_offset_x = 12.838;

// Distance from the front to the beginning of the display
display_offset_y = 20.45;

// board holes radius
pin_radius = 1.35;

// board holes center distance from edge
pin_offset = 3;

// pin height (board is 4.7mm high)
pin_height = 5;

///////////////////////////////////////////////////////////////////////////////////////////////

c_width = width + clearance + 2 * wall_width;
c_depth = depth + clearance + 2 * wall_width;
c_height = height + clearance + wall_width;

module usbc_female() {
    // width is 8.73, 6.44 without chamfer
    c_width = 8.73 + clearance;
    c_height = 2.96 + clearance;
    c_depth = 10.525 + clearance;
    radius = (c_width - 6.44) / 2;

    difference() {
	difference() {
	    difference() {
		difference() {
		    cube([c_width, c_depth, c_height]);
		    fillet_mask(l = c_depth, r = radius, orient = ORIENT_Y, align=V_BACK);
		}
		up(c_height) fillet_mask(l = c_depth, r = radius, orient = ORIENT_Y, align=V_BACK);
	    }
	    up(c_height) right(c_width) fillet_mask(l = c_depth, r = radius, orient = ORIENT_Y, align=V_BACK);
	}
	right(c_width) fillet_mask(l = c_depth, r = radius, orient = ORIENT_Y, align=V_BACK);
    }
}

module board_pin() {
    cylinder(pin_height, r = pin_radius - clearance);
}

module board_pins() {
    union() {
	union() {
	    back(wall_width + pin_offset) right(wall_width + pin_offset) board_pin();
	    back(depth + wall_width - pin_offset) right(wall_width + pin_offset) board_pin();
	}
	back(depth + wall_width - pin_offset) right(width + wall_width - pin_offset) board_pin();
    }
}

module case_base() {
    union() {
	difference() {
	    difference() {
		cube([c_width, c_depth, c_height]);
		translate([wall_width, wall_width, wall_width])
		    #cube([c_width - 2 * wall_width, c_depth - 2 * wall_width, c_height - wall_width + 1]);
	    }
	    translate([usbc_from_left, -1, usbc_from_bottom])
		usbc_female();
	}
	up(wall_width) board_pins();
    }
}
case_base();

module case_lid_fit() {
    // The case size is calculated around the board, so the lid lip can be
    // the exact size of the board
    lip_width = width;
    lip_depth = depth;
    difference() {
	cube([lip_width, lip_depth, lid_lip_height]);
	right(clearance + wall_width) back(clearance + wall_width) cube([lip_width - wall_width * 2, lip_depth - wall_width * 2, lid_lip_height]);
    }
}

module case_lid_display() {
    offset_y = wall_width + display_offset_y;
    offset_x = wall_width + display_offset_x;
    w = display_width;
    d = display_depth;
    h = wall_width;
    back(offset_y) right(offset_x) cube([w, d, h]);
}

module case_lid() {
    difference() {
	union() {
	    back(wall_width + clearance) right(clearance + wall_width) case_lid_fit();
	    up(lid_lip_height) cube([c_width, c_depth, wall_width]);
	}
	up(lid_lip_height) case_lid_display();
    }
}
up(height) case_lid();