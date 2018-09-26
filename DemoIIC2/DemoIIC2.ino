//

#include <IIC_without_ACK.h>
#include "oledfont.c"   //codetab

#define OLED_SDA 8 //Arduino Digital Pin
#define OLED_SCL 9 //Arduino Digital Pin

IIC_without_ACK lucky(OLED_SDA, OLED_SCL);//9 -- sda,10 -- scl

void setup()
{
  lucky.Initial();
  delay(10);
}

void loop()
{
  lucky.Fill_Screen(0xff);
  delay(2000);
  lucky.Fill_Screen(0xf0);
  delay(2000);
  lucky.Fill_Screen(0x00);
  lucky.Char_F6x8(25,1,"Squirrel-Labs"); 
  lucky.Char_F6x8(0,4,"www.squirrel-labs.net"); 
  lucky.Char_F6x8(8,7,"Testing OLED Screen");  
  
  delay(5000);
  lucky.Fill_Screen(0x00); 
  delay(5000);
}
