#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "rectangle.hpp"
#include "wall.h"
#include "drawable.hpp"
#include "victim.h"

int main(){
   window w( vector( 128, 64 ), 2 );
   
   ball b( w, vector( 50, 20 ), 9, vector( 5, 5 ) );
   wall top(w, vector(4,0), vector(119,3), 1, vector(1,-1));
   wall right(w, vector(120,0), vector(124,60), 1 ,vector(-1,1));
   wall bottom(w, vector(4,61), vector(119,64), 1, vector(1,-1));
   wall left(w, vector(4,4), vector(8,60), 1, vector(-1, 1));
   wall box(w, vector(50,40), vector(90,40),1, vector(-1, 1));
   victim foe(w, vector(50,40), vector(60,50));
   drawable * objects[] = { &b,  &right, &bottom, &top, &left, &foe};
	
   for(;;){
	   
      w.clear();
      for( auto & p : objects ){
         p->draw();
		 
      }
      wait_ms( 200 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

