#include "victim.h"
#include "stdio.h"

victim::victim( window & w, const vector & start, const vector & end):
rectangle( w, start, end), die(0,0){}

void victim::draw(){
	rectangle::draw();
	printf("%d, %d\n", victim::end.x, victim::end.y);
}

void victim::update(){
	//victim::end -= die;
	if(bottom.end.x!=top.location.x){
	bottom.end-=die;
	bottom.location.y-=die.y;
	}
	if(right.end.x!=top.location.x){
	right.end-=die;
	right.location.x-=die.x;
	}
	if(top.end.x!=top.location.x){
	top.end.x-=die.x;
	}
	if(left.end.y!=top.location.y){
	left.end.y-=die.y;
	}
}
	//printf("!");
	


void victim::interact(drawable &other){
	if( this != & other){
      if( overlaps( other )){
		  //printf("!");
		  die.x = 1;
		  die.y = 1;
      }
	}
}