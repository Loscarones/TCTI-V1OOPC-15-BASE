#include "objectt.h"
#include "line.hpp"

objectt::objectt(window & w, int start_x, int start_y):
    w(w), rec(w, start_x, start_y, start_x+30, start_y+60),
    legL( w, start_x,         start_y + 60,       start_x,      start_y + 90),
    legR( w, start_x + 30,    start_y + 60,       start_x + 30, start_y+ 90 ),
    armL( w, start_x -60,     start_y,            start_x,      start_y ),
    armR( w, start_x+ 30,     start_y,            start_x + 60, start_y ),
    circ( w, start_x + 15,    start_y + 15, 15)
{}

void objectt::draw(){
    rec.draw();
    legL.print();
    legR.print();
    armL.print();
    armR.print();
    circ.print();
}