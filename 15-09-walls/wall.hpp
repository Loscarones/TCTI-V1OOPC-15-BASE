#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"
#include "rectangle.hpp"

class wall : public rectangle {
private:
    bool filled;
    int update_interval;
    int update_count;
public:
   wall( window & w, const vector & start, const vector & end , int update_interval);   
   void draw() override;
   void update();
};
