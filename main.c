
#include <18F4550.h>



//FUSES
#FUSES NOWDT  //Fuse No watchdog timer
//Fuse que hace el "switcheo" entre el cristal externo e interno o detiene al microcontrolador 
//en caso de que nuestro cristal externo este dañado
#FUSES NOBROWNOUT 
#FUSES INTRC //Fuse para cristal interno
#FUSES NOPROTECT 

#use delay(clock=8M)
#USE STANDARD_IO(B)

void main()
{

   
   while(TRUE)
   {
      //LED1
     output_low(pin_d0);
     output_high(pin_d1);
     output_float(pin_d2);
     delay_ms(500);
     
     //LED2
     output_high(pin_d0);
     output_low(pin_d1);
     output_float(pin_d2);
     delay_ms(500);
     
     
     //LED3
     output_float(pin_d0);
     output_low(pin_d1);
     output_high(pin_d2);
     delay_ms(500);
     
     //LED4
     output_float(pin_d0);
     output_high(pin_d1);
     output_low(pin_d2);
     delay_ms(500);
     
     //LED5
     output_low(pin_d0);
     output_float(pin_d1);
     output_high(pin_d2);
     delay_ms(500);
     
     //LED6
     output_high(pin_d0);
     output_float(pin_d1);
     output_low(pin_d2);
     delay_ms(500);
     
   }



}

