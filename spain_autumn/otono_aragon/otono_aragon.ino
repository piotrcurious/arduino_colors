#include <TFT_eSPI.h>  // TFT library for ESP32
#include "palette_otono_aragon.h"  // Include the autumn color palette
#include "patterns64_otono_aragon.h"  // Include the pattern bitmaps


#define PATTERN_ITERATIONS 4000
#define SCREEN_WIDTH 200
#define SCREEN_HEIGHT 320


// Create TFT screen object
TFT_eSPI tft = TFT_eSPI();  // Invoke the TFT library

// Define the width and height of the patterns
const int pattern_width = 8;
const int pattern_height = 8;

// Define a function to draw a pattern
void drawPattern(const uint16_t pattern[], int xOffset, int yOffset) {
  for (int y = 0; y < pattern_height; y++) {
    for (int x = 0; x < pattern_width; x++) {
      uint16_t color = pattern[y * pattern_width + x];
      tft.drawPixel(x + xOffset, y + yOffset, color);
    }
  }
}

// Function to simulate a transition from green to autumn
void displayTransitionToAutumn(int xOffset, int yOffset) {
  
  tft.fillScreen(TFT_BLACK);
  // Display green landscape first (early autumn, when the leaves begin to change)
  for (int y = 0; y < PATTERN_ITERATIONS; y++) {
  drawPattern(pattern_sierra_albarracin, xOffset+random(SCREEN_WIDTH-xOffset), yOffset+random(SCREEN_HEIGHT-yOffset));
  }
  delay(1500);  // Hold the green pattern for 1.5 seconds

  // Transition to yellow and red (the colors of autumn leaves)
 for (int y = 0; y < PATTERN_ITERATIONS; y++) { 
  drawPattern(pattern_pyrenees_mountains, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + (pattern_height+5)+random(SCREEN_HEIGHT-yOffset-(pattern_height+5)));
  }
  delay(1500);  // Hold the orange pattern for 1.5 seconds

  // Peak of autumn with rich reds and oranges
 for (int y = 0; y < PATTERN_ITERATIONS; y++) { 
  drawPattern(pattern_embalse_mequinenza,
   xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 2*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-2*(pattern_height+5)));
  }
  delay(1500);  // Hold the red rock and water pattern for 1.5 seconds
}

void displayAutumnArrival(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("Otoño llega a Aragón");

  // Display the first hints of autumn (the green and yellow landscapes)
  for (int y = 0; y < PATTERN_ITERATIONS; y++) {
  drawPattern(pattern_sierra_albarracin, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 30+random(SCREEN_HEIGHT-yOffset-30));
  }
}

void displayChangingLandscapes(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("Los paisajes cambian");

  // Display the landscape transitioning from green to red
 for (int y = 0; y < PATTERN_ITERATIONS; y++) { 
  drawPattern(pattern_sierra_albarracin, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + (pattern_height+5)+random(SCREEN_HEIGHT-yOffset-(pattern_height+5)));
  }
  delay(2000);
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_pyrenees_mountains, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 2*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-2*(pattern_height+5)));
  }   
  delay(2000);

 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_embalse_mequinenza, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 3*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-3*(pattern_height+5)));
  }   
  delay(2000);
}

void displayPeakAutumn(int xOffset, int yOffset) {
  //tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE,TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("El pico de otoño");


  // Display the peak autumn colors with full reds and oranges
 tft.setCursor(xOffset, yOffset);
 tft.println("pyrenees mountains");

 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_pyrenees_mountains, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("embalse mequinenza ");

 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_embalse_mequinenza, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("teurel forests ");
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_teruel_forests, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("ordesa_valley ");
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_ordesa_valley, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("meseta_central ");
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_meseta_central, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("canyon_rio_lobos ");
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_canyon_rio_lobos, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);

tft.setCursor(xOffset, yOffset);
tft.println("huesca_hills ");
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_huesca_hills, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);


}

void displayQuietAutumn(int xOffset, int yOffset) {
//  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("El otoño tranquilo");

  // Display the serene, calming autumn landscape
 for (int y = 0; y < PATTERN_ITERATIONS; y++) {  
  drawPattern(pattern_sierra_albarracin, xOffset+random(SCREEN_WIDTH-xOffset), yOffset + 1*(pattern_height+5)+random(SCREEN_HEIGHT-yOffset-1*(pattern_height+5)));
  }   
  delay(2000);
}

void setup() {
  // Initialize TFT screen
  tft.init();
  tft.setRotation(0);  // Set screen rotation to normal
  tft.fillScreen(TFT_BLACK);  // Clear screen to black

}

void loop() {
  // In this demo, we display a sequence of autumn-themed patterns once. You could loop it or add more interactions.

  // Tell the story of autumn in Aragón with patterns
  int xOffset = 10;
  int yOffset = 10;

  displayTransitionToAutumn(xOffset, yOffset);
  // 1. The Arrival of Autumn
  displayAutumnArrival(xOffset, yOffset);
  delay(2000);

  // 2. Changing Landscapes
  displayChangingLandscapes(xOffset, yOffset + 00);

  // 3. The Peak of Autumn
  displayPeakAutumn(xOffset, yOffset + 00);

  // 4. Quiet, Tranquil Autumn
  displayQuietAutumn(xOffset, yOffset + 0);

}
