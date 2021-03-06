#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, \
	K010,       K012, K013, K014, K015, K016, K017, K018, \
	K020, K021, K022, K023, K024, K025, K026, K027, K028, \
	K030, K031, K032, K033, K034, K035, K036, K037, K038, \
	K040, K041, K042, K043, K044, K045, K046, K047, K048, \
	K050, K051, K052, K053, K054, K055, K056, K057, K058, \
	                                                      \
	                  K073, K074, K075,       K077, K078, \
	                        K084, K085,       K087, K088, \
	            K092, K093, K094, K095,       K097, K098, \
	            K102,       K104, K105, K106, K107, K108, \
	            K112, K113, K114, K115, K116, K117  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008 }, \
	{ K010,  KC_NO, K012,  K013,  K014,  K015,  K016,  K017,  K018 }, \
	{ K020,  K021,  K022,  K023,  K024,  K025,  K026,  K027,  K028 }, \
	{ K030,  K031,  K032,  K033,  K034,  K035,  K036,  K037,  K038 }, \
	{ K040,  K041,  K042,  K043,  K044,  K045,  K046,  K047,  K048 }, \
	{ K050,  K051,  K052,  K053,  K054,  K055,  K056,  K057,  K058 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K073,  K074,  K075,  KC_NO, K077,  K078 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K084,  K085,  KC_NO, K087,  K088 }, \
	{ KC_NO, KC_NO, K092,  K093,  K094,  K095,  KC_NO, K097,  K098 }, \
	{ KC_NO, KC_NO, K102,  KC_NO, K104,  K105,  K106,  K107,  K108 }, \
	{ KC_NO, KC_NO, K112,  K113,  K114,  K115,  K116,  K117,  KC_NO }  \
}

#endif