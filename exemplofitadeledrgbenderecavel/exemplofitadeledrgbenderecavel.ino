# include <Adafruit_NeoPixel.h>


// ------------ instanciando a biblioteca -----------


#define LED_COUNT 15 // números de led da fita
#define LED_PIN 7

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin();                  // inicia a fita de led digital
  strip.show();                   // imprimi o que a fita deverá fazer
  strip.setBrightness(1100);       // define o brilho
  pinMode(LED_PIN, OUTPUT);
  

}

void loop() {
  digitalWrite(LED_PIN, HIGH);
   strip.setPixelColor(0 , strip.Color(255,100,0));
   strip.setPixelColor(1 , strip.Color(255,100,0));
   strip.setPixelColor(2 , strip.Color(255,100,0));
   strip.setPixelColor(3 , strip.Color(255,100,0));
   strip.setPixelColor(4 , strip.Color(255,100,0));
   strip.setPixelColor(5 , strip.Color(255,100,0));
   strip.setPixelColor(6 , strip.Color(255,100,0));
   strip.setPixelColor(7 , strip.Color(255,100,0));
   strip.setPixelColor(8 , strip.Color(255,100,0));
   strip.setPixelColor(9 , strip.Color(255,100 , 0));
   strip.setPixelColor(10 , strip.Color(255,100 , 0));
   strip.setPixelColor(11 , strip.Color(255,100 , 0));
   strip.setPixelColor(12 , strip.Color(255,100 , 0));
   strip.setPixelColor(13 , strip.Color(255,100 , 0));
   strip.setPixelColor(14 , strip.Color(255,100, 0));
   strip.setPixelColor(15 , strip.Color(255,100, 0));
   
   strip.show(); // é necessária pra que as alterações aconteçam
   delay(500);
   strip.clear(); 
  
  
}
