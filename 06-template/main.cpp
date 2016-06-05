// template

#include <iostream>

#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "filled_rectangle.hpp"
#include "objectt.h"

int main(int argc, char **argv){
   window w( 500, 500, 2 );
   
   //line diagonal_line( w, 5, 5, 30, 40 );
   //diagonal_line.print();
   
   //rectangle box( w, 20, 50, 30, 20 );
   //box.print();
   
  // circle ball( w, 70, 30, 20 );
   //ball.print();
   
   //filled_rectangle filled(w, 10, 10, 50 , 70);
   //filled.draw();
   
   objectt obj(w, 40, 40);
   obj.draw();
   
   return 0;
}
