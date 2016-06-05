#include "ball.hpp"
//#inlcude <stdio.h>
#include <iostream>
#include "vector.hpp"
#include "stdio.h"

void ball::update(){
   location += speed;
   //printf("%d\n", bounce.x);
}

ball::ball( window & w, const vector & midpoint, int radius, const vector & speed ):
   circle( w, midpoint, radius ),
   speed( speed )
{}

void ball::interact( drawable & other ){
   if( this != &other){
      if( overlaps( other )){
         speed.x *= other.bounce.x;
		 speed.y *= other.bounce.y;
      }
   }
}