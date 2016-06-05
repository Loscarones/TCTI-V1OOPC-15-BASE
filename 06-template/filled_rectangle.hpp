#ifndef FILLED_RECTANGLE_H
#define FILLED_RECTANGLE_H

#include "window.hpp"

class filled_rectangle {
    window & w;
    int p_start_x;
    int p_start_y;
    int p_end_x;
    int p_end_y;
public:
    filled_rectangle( window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y );
    void draw();
};

#endif