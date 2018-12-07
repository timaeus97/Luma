#include <TVout.h>
#include <utility/fontALL.h>
#include "smile.h"


int randNumber;
int x, w;
int index;
int val = 0;
TVout TV;



void setup() {


  int w, x;
  w = pgm_read_byte(smile);
  TV.begin(NTSC, 96, 96);
  //  TV.bitmap(30, 10, smile);

  TV.select_font(font4x6);
  //
  //Serial.begin(9600);
  //Serial.println(TV.hres());
}

//
//
void loop() {
  //  val = analogRead(potPin);    // read the value from the sensor
  int sensorValue = analogRead(A2);
  int sensorValue2 = analogRead(A3);

  if (sensorValue == 0) {
    TV.bitmap((TV.hres()) + 15, 5, smile);


  }

  else if ( sensorValue > 0 && sensorValue < 50) {
//    for (int i = 30; i < (TV.hres()); i ++) {
      //TV.bitmap(i,random(1,60),random(smile,smile2));
      TV.bitmap((TV.hres() * random(100)), random(40, 60), random(smile2, random(1)));

    }

  else if  ( sensorValue >= 50 && sensorValue < 100 ) {
//    for (int i = 30; i < (TV.hres()); i ++) {
      //TV.bitmap(i,random(1,60),random(smile,smile2));
      TV.bitmap((TV.hres() * random(100,200)), random(1, 80), smile, 0.,40);
      delay(500);
 


    }


  else if  ( sensorValue >= 100 && sensorValue < 200 ) {

    //for (int i = 0; i < (TV.hres()); i ++) {
    //    TV.bitmap(i,random(1,60),smile2);_)
      TV.bitmap((TV.hres() * random(100,200)), random(1, 80), smile);
      delay(500);

  }

  else if  ( sensorValue >= 200 && sensorValue < 300 ) {

    TV.bitmap((TV.hres()) / 12 , 15, smile);
    TV.bitmap((TV.hres()) / 128 , 66, smile2);

  }

  else if  ( sensorValue >= 300 && sensorValue < 400 ) {

    TV.bitmap((TV.hres() * random(100,200)) , 5, smile);
    TV.bitmap(40*(TV.hres()) / random(30,100) , random(5,100), smile2);
    delay(500);

  }

  else if  ( sensorValue >= 400 && sensorValue < 500 ) {

    TV.bitmap((TV.hres()) / 23 , 29, smile);
    TV.bitmap((TV.hres()) / 23 , 29, smile2);

  }
  else if  ( sensorValue >= 500 && sensorValue < 600 ) {

    TV.bitmap((TV.hres()) / 41 , 21, smile);
    TV.bitmap((TV.hres()) / 16 , 66, smile2);


  }

  else if  ( sensorValue >= 600 && sensorValue < 700 ) {
//hier
    TV.bitmap((TV.hres()) / 16 , 66, smile);
    TV.bitmap((TV.hres()) / 23 , 29, smile2);



  }
  else if  ( sensorValue >= 700 && sensorValue < 800 ) {

    TV.bitmap((TV.hres()) / 74 , 35, smile);
    TV.bitmap((TV.hres()) / 23 , 29, smile2);

  }

  else if  ( sensorValue >= 800 && sensorValue < 900 ) {

    TV.bitmap((TV.hres()) / 74 , 63, smile);
    TV.bitmap((TV.hres()) / 23 , 29, smile2);

  }

  else if  ( sensorValue >= 900 && sensorValue < 1000 ) {

    TV.bitmap((TV.hres()) / 94 , 67, smile);

  }



  else {

      TV.bitmap((TV.hres() * random(30,80)), random(1, 40), random(smile, random(1)));
      delay(500);

//      void bitmap(uint8_t x, uint8_t y, const unsigned char * bmp, uint16_t i = 0, uint8_t width = 0, uint8_t lines = 0);

  }
  //  TV.begin(NTSC, 140, 96);

  return;

}









//TV.bitmap(random(0,10),random(0,20),'a');
//TV.bitmap(random(0,10),random(0,20),'a');
//TV.bitmap(random(0,10),random(0,20),'a');
//TV.bitmap(random(0,10),random(0,20),'a');

//  delay(100);

//TV.delay(100);

//  PROGMEM const unsigned char smile[] = {
//  63,90,
//  };
//}

/*

  if (potPin < 100) {
  for (int i = 30; i < (TV.hres()); i +10) {
    TV.bitmap(i,random(1,33),smile);
    const unsigned char smile[] = {
  30, 10,
    };
  }
  }

  else if (potPin < 200) {
  for (int i = 0; i < (TV.hres()); i +10) {
    TV.bitmap(i,random(1,33),smile);
      const unsigned char smile[] = {
  63, 90,
    };
  }

  }*/

// else if (potPin < 200) {
//  for (int i = 0; i < (TV.hres()); i +1) {
//    TV.bitmap(i,random(1,10),smile);
//  }
//}




//if (sensorValue <340) {
//  PROGMEM const unsigned char smile[] = { 10,10,
//  };
//    TV.bitmap((TV.hres() + w) / -40, 1, smile);
//
//
//
//}
//





//else {
//  PROGMEM const unsigned char smile[] = { 50,10,
//  };
//      TV.bitmap((TV.hres() + w) / 30, 1, smile);
//
//}

//  if (sensorValue < 900) {
//    for (int i = 0; i < (TV.hres()); i = i + 1) {
//      TV.bitmap(i, 10, smile);
//    }
//
//  }
//
//  else {
//    for (int i = 0; i < (TV.hres()); i = i + 50) {
//      TV.bitmap(i, 1, skull);
//
//    }
//  }

