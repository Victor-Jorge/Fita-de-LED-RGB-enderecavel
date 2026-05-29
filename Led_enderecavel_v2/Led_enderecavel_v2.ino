# include <Adafruit_NeoPixel.h>


// ------------ instanciando a biblioteca -----------

// amarelo = (255,100,0)

#define LED_COUNT 15 // números de led da fita
#define LED_PIN 7

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();                  // inicia a fita de led digital
  //strip.show();                   // imprimi o que a fita deverá fazer
  strip.setBrightness(255);       // define o brilho, vai de 0 a 255
}

void loop() {
  for( int i =0; i < LED_COUNT; i++){
    strip.setPixelColor(i , strip.Color(255,255,255));
  }
   strip.show(); // é necessária pra que as alterações aconteçam
}
