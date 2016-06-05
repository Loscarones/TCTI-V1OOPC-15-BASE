#include "wall.h"
#include "line.hpp"
#include "vector.hpp"
#include "window.hpp"
#include <stdio.h>

wall::wall( window & w, const vector & start, const vector & end, int update_interval, vector bounce):
	rectangle( w, start, end), update_interval( update_interval ), filled( true ), update_count(0)
{
	drawable::bounce = bounce;
}

	void wall::draw(){
		if(!filled){
		rectangle::draw();
		}
		
		
		
		if(filled){
			vector begin(location.x, location.y);
			vector einde(end.x, location.y);
			int hoogte = end.y-location.y;
			for(int a = 0;a<hoogte;a++){
				line lijn(w, begin, einde);
				begin.y++;
				einde.y++;
				lijn.draw();
				
			}
		}
		 
	}
	
	void wall::update(){
		if(update_count++>update_interval){
			update_count=0;
			filled = !filled;
			}
		}
		/*
	void wall::interact( drawable & other ){
		if( this != & other){
			if( overlaps( other )){
         drawable::bounce.x=stuiter.x;
		 drawable::bounce.y=stuiter.y;
		 printf( "bounce %d, %d\n", bounce.x, bounce.y);
      }
   }
}
      
*/
