#include <TFT_eSPI.h>  // TFT library for ESP32
#include "../../autumn_in_spain.h"  // Include the autumn color palette
#include "patterns.h"  // Include the pattern bitmaps

// Create TFT screen object
TFT_eSPI tft = TFT_eSPI();  // Invoke the TFT library

// Define the width and height of the patterns
const int pattern_width = 8;
const int pattern_height = 8;

// Define a function to draw a pattern
void drawPattern(uint16_t pattern[], int xOffset, int yOffset) {
  for (int y = 0; y < pattern_height; y++) {
    for (int x = 0; x < pattern_width; x++) {
      uint16_t color = pattern[y * pattern_width + x];
      tft.drawPixel(x + xOffset, y + yOffset, color);
    }
  }
}

void setup() {
  // Initialize TFT screen
  tft.init();
  tft.setRotation(0);  // Set screen rotation to normal
  tft.fillScreen(TFT_BLACK);  // Clear screen to black

  // Display a few patterns with some spacing
  int xOffset = 10;
  int yOffset = 10;

  // Draw different patterns on the screen
  drawPattern(pattern_pirineos, xOffset, yOffset);  // Pyrenees Pattern
  delay(2000);  // Wait for 2 seconds
  
  yOffset += pattern_height + 5;  // Add some vertical space between patterns
  drawPattern(pattern_sierra_albarracin, xOffset, yOffset);  // Sierra de Albarracín Pattern
  delay(2000);  // Wait for 2 seconds

  yOffset += pattern_height + 5;  // Add more space
  drawPattern(pattern_embalse_mequinenza, xOffset, yOffset);  // Embalse de Mequinenza Pattern
  delay(2000);  // Wait for 2 seconds

  // Add more patterns if necessary
}

void loop() {
  // In this demo, we just display patterns once. You can refresh the screen in a loop if needed.
}
