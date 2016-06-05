// example:
// definition of the functions of a rectangle object

#include "wall.hpp"

wall::wall( window & w, const vector & start, const vector & end , int update_interval): rectangle(w, start, end),
   update_interval( update_interval )
{}

void wall::draw(){
    
}

void wall::update(){
    
}
