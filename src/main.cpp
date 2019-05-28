#include <Arduino.h>
#include<M5Stack.h>
#include <Adafruit_NeoPixel.h>
#define M5STACK_FIRE_NEO_NUM_LEDS 10
#define M5STACK_FIRE_NEO_DATA_PIN 15
#define DACPIN 25 // speaker DAC, only 8 Bit

#define SAMPLINGFREQUENCY 44100
#define NUMBEROFSAMPLES   SAMPLINGFREQUENCY * 1 // paly 1 seconds

#define DAC_MAX_AMPLITUDE 127/4 // max value is 127, but it is too loud

#define AUDIOBUFFERLENGTH NUMBEROFSAMPLES

uint8_t AudioBuffer[AUDIOBUFFERLENGTH];


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(M5STACK_FIRE_NEO_NUM_LEDS, M5STACK_FIRE_NEO_DATA_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  M5.begin();// put your setup code here, to run once:
  //pixels.begin();
  //Microphone
  /*const float   frequency = 440;
  const float   amplitude = DAC_MAX_AMPLITUDE;

  // store sine wave in buffer
  for (int n = 0; n < NUMBEROFSAMPLES; n++)
  {
    int16_t sineWaveSignal = ( sin( 2 * PI * frequency / SAMPLINGFREQUENCY * n )) * amplitude;
    AudioBuffer[n] = sineWaveSignal+128;
  }*/
}

void loop() {
   //put your main code here, to run repeatedly:
  //Hello World Code
   M5.Lcd.println("Hello World!");
   delay(1000);

  // To Blink LED's
 /*static int pixelNumber=0;// = random(0, M5STACK_FIRE_NEO_NUM_LEDS - 1);
  pixelNumber++;
  if(pixelNumber>9)pixelNumber=0;
  int r = 1<<random(0, 7);
  int g = 1<<random(0, 7);
  int b = 1<<random(0, 7);

  pixels.setPixelColor(pixelNumber, pixels.Color(r, g, b));     
  pixels.show();

  delay(100);*/

  //Microphone
 /* uint32_t start = micros();

  for (int n = 0; n < NUMBEROFSAMPLES; n++)
  {
    // wait for next sample
    while (start + ( 1000000UL / SAMPLINGFREQUENCY) > micros() );
    start = micros();

    dacWrite(DACPIN, AudioBuffer[n]);

  }

  delay(3000);*/
}