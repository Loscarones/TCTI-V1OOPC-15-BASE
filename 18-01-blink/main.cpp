#include "hwlib.hpp"

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
   
    for(;;){
        led1.set(1);
        led2.set(1);
        led3.set(0);
        led4.set(0);
        hwlib::wait_ms(1000);
        
        led1.set(0);
        led2.set(1);
        led3.set(1);
        led4.set(0);
        hwlib::wait_ms(1000);
        
        led1.set(0);
        led2.set(0);
        led3.set(1);
        led4.set(1);
        hwlib::wait_ms(1000);
        
        led1.set(0);
        led2.set(1);
        led3.set(1);
        led4.set(0);
        hwlib::wait_ms(1000);
    }
}
