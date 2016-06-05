#include "filled_rectangle.hpp"

filled_rectangle::filled_rectangle( window & w, int p_start_x, int p_start_y, int p_end_x, int p_end_y ):
        w(w),p_start_x(p_start_x), p_start_y(p_start_y), p_end_x(p_end_x), p_end_y(p_end_y)
{}

void filled_rectangle::draw(){
    if(p_start_y < p_end_y){
        for(int i = p_start_y; i <= p_end_y; i++){
            for(int j = p_start_x; j <= p_end_x; j++){
                w.draw(j,i);
            }
        }
    }

}


