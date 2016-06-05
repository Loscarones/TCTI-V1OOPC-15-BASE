#ifndef VICTIM_H
#define VICTIM_H

#include "rectangle.hpp"

class victim: public rectangle{
public:
	victim( window & w, const vector & start, const vector & end);
	void draw() override;
	
	void interact(drawable &other) override;
	void update() override;
private:
	vector die;
};

#endif