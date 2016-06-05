#ifndef WALL_H
#define WALL_H

#include "rectangle.hpp"


class wall: public rectangle{
private:
	int update_interval;
	bool filled;
	int update_count;
	
	
public:
	wall( window & w, const vector & start, const vector & end, int update_interval, vector stuiter );
	void draw() override;
	void update() override;
	//void interact( drawable & other ) override;
};

#endif //WALL_H