#ifndef OBJECT_H
#define OBJECT_H

#include "window.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"

class objectt {
private:
    window & w;
    filled_rectangle rec;
    line armL, armR,legL,legR;
    circle circ;
public:
   objectt( window & w, int start_x, int start_y);
   void draw();
};

#endif