#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LIGHTS 198

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LIGHTS, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}


void loop() {
byte brightness;
  // First 28 leds always red
  for (byte i = 0; i < 27; i++) {
    brightness = random(1,3);
    if (random(100) <= 100) {
      strip.setPixelColor(i,100 / brightness,0,0);
    } else {
      strip.setPixelColor(i,0,0,0);
    }
  }
  
  // Next 28 leds darker reddish
  for (byte i = 27; i < 55; i++) {
    brightness = random(1,3);
    if (random(100) <= 95) {
      strip.setPixelColor(i,random(80,100)/brightness,random(10,20)/brightness,0);
    } else {
      strip.setPixelColor(i,0,0,0);
    }
  }  

  // Next 28 leds darker reddish
  for (byte i = 55; i < 83; i++) {
     brightness = random(1,4);
     if (random(100) <= 90) {
      strip.setPixelColor(i,random(80,90)/brightness,random(20,45)/brightness,0);
    } else {
      strip.setPixelColor(i,0,0,0);
    }
  }
  
  // Next 28 leds orange
  for (byte i = 83; i < 111; i++) {
     brightness = random(1,4);
     if (random(100) <= 80) {
      strip.setPixelColor(i,random(70,90)/ brightness ,random(20,45) / brightness,0);
     } else {
      strip.setPixelColor(i,0,0,0);
     }
  }
  
  // Next 28 leds yellow
  for (byte i = 111; i < 139; i++) {
     brightness = random(1,4);
     if (random(100) <= 40) {
      strip.setPixelColor(i,random(40,50)/ brightness,random(10,30)/ brightness,0);
     } else {
      strip.setPixelColor(i,0,0,0);
     }
  }
  
  // Next 28 leds yellow
  for (byte i = 139; i < 167; i++) {
      brightness = random(1,4);
      if (random(100) <= 20) {
      strip.setPixelColor(i,random(40,50)/ brightness,random(10,30)/ brightness,0);
      } else {
      strip.setPixelColor(i,0,0,0);
    }
  }

  // Next 13 leds yellow
  for (byte i = 167; i < 180; i++) {
      brightness = random(1,4);
      if (random(100) <= 10) {
      strip.setPixelColor(i,random(40,50)/ brightness,random(10,30)/ brightness,0);
      } else {
      strip.setPixelColor(i,0,0,0);
      }
    }
    
  // Next 18 leds yellow
  for (byte i = 180; i < 198; i++) {
      brightness = random(1,4);
      if (random(100) <= 5) {
      strip.setPixelColor(i,random(40,50)/ brightness,random(10,30)/ brightness,0);
      } else {
      strip.setPixelColor(i,0,0,0);
      }
    }
  

  delay(40);
  //leds[i] = CRGB(0,0,i*3); break;
  //LEDS.setBrightness(random(100,255));
  strip.show();
}
