#include "quantum.h"

// readability
#define XXX 
#define KC_NO

#pragma once



#define LAYOUT_Nice69( \
    k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k214, \
    k000, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k314, \
    k100, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k414, \
    k200, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313, \
    k300, k400, k401, k402, k406, k409, k411, k412, k413 \
) { \
    { k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, k013, k014, k214 }, \
    { k000, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k314 }, \
    { k100, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k414 }, \
    { k200, k301, k302, k303, k304, k305, k306, k307, k308, k309, k310, k311, k312, k313 }, \
    { k300, k400, k401, k402, k406, k409, k411, k412, k413 } \
}

