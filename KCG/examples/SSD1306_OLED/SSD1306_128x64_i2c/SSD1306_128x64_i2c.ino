/**************************************************************************
 KCG SSD1306 OLED Simple library
 **************************************************************************/

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <KCG_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C // I2C Address
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("Display failed"));
    for(;;);
  }

  delay(10);
  display.clearDisplay();
  

//  display.invertDisplay(true);
//  display.invertDisplay(false);
//  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE); // Draw 'inverse' text
//  display.println(3.141592);
//  display.println(0xDEADBEEF, HEX);
//  display.write(i);
//  
//  display.startscrollright(0x00, 0x0F);
//  display.startscrollleft(0x00, 0x0F);
//  display.startscrolldiagright(0x00, 0x07);
//  display.startscrolldiagleft(0x00, 0x07);
//  display.stopscroll();
//
//  display.drawPixel(10, 10, SSD1306_WHITE);
//  display.drawLine(0, 0, display.width(), display.height()-1, SSD1306_WHITE);
//  display.drawLine(0, 0, display.width(), display.height()-1, SSD1306_WHITE);
//  display.drawRect(i, i, display.width()-2*i, display.height()-2*i, SSD1306_WHITE);
//  display.fillRect(i, i, display.width()-i*2, display.height()-i*2, SSD1306_INVERSE);
//  display.drawCircle(display.width()/2, display.height()/2, i, SSD1306_WHITE);  
//  display.fillCircle(display.width() / 2, display.height() / 2, i, SSD1306_INVERSE);
//  display.drawRoundRect(i, i, display.width()-2*i, display.height()-2*i,
//  display.fillRoundRect(i, i, display.width()-2*i, display.height()-2*i,
//  display.drawTriangle(
//      display.width()/2  , display.height()/2-i,
//      display.width()/2-i, display.height()/2+i,
//      display.width()/2+i, display.height()/2+i, SSD1306_WHITE);
//  display.fillTriangle(
//      display.width()/2  , display.height()/2-i,
//      display.width()/2-i, display.height()/2+i,
//      display.width()/2+i, display.height()/2+i, SSD1306_INVERSE);
//  display.drawBitmap(
//    (display.width()  - LOGO_WIDTH ) / 2,
//    (display.height() - LOGO_HEIGHT) / 2,
//    logo_bmp, LOGO_WIDTH, LOGO_HEIGHT, 1);		


  display.display();
  delay(10);
}


void loop() {

  display.clearDisplay();
  display.setTextSize(2);
  display.cp437(true);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);

  display.println(F("KCG"));
  
  display.display();
  delay(100);

}



