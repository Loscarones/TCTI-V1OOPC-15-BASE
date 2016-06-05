#include "hwlib.hpp"

bool druk = true;
int count = 0;

int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   auto led1 = hwlib::target::pin_in_out( 1, 26 );
   auto led2 = hwlib::target::pin_in_out( 0, 15 );
   auto led3 = hwlib::target::pin_in_out( 3, 1 );
   auto led4 = hwlib::target::pin_in_out( 3, 3 );
   led1.direction_set_output();
   led2.direction_set_output();
   led3.direction_set_output();
   led4.direction_set_output();

   auto sw = hwlib::target::pin_in_out( 2, 23 );
   sw.direction_set_input();
   
   auto sw2 = hwlib::target::pin_in_out( 2, 24 );
   sw2.direction_set_input();

   for(;;){
       if(sw.get() && druk){
           count++;
           druk = false;
       }
       if(!sw.get() && !druk){
           druk = true;
       }
       
       if(sw2.get()&& druk){
           count--;
           druk = false;
       }
       if(!sw2.get() && !druk){
           druk = true;
       }
       
       if(count == 1){
        led1.set(1);
        led2.set(0);
        led3.set(0);
        led4.set(0);
       }
       if(count == 2){
        led1.set(1);
        led2.set(1);
        led3.set(0);
        led4.set(0);
       }
       if(count == 3){
        led1.set(1);
        led2.set(1);
        led3.set(1);
        led4.set(0);
       }
       if(count == 4){
        led1.set(1);
        led2.set(1);
        led3.set(1);
        led4.set(1);
       }
   }
}


