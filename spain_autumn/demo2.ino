#include <TFT_eSPI.h>  // TFT library for ESP32
#include "palette_otono.h"  // Include the autumn color palette
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

// Function to simulate a transition from green to autumn
void transitionToAutumn(int yOffset) {
  tft.fillScreen(TFT_BLACK);
  // Display green landscape first (early autumn, when the leaves begin to change)
  drawPattern(pattern_sierra_albarracin, 10, yOffset);
  delay(1500);  // Hold the green pattern for 1.5 seconds

  // Transition to yellow and red (the colors of autumn leaves)
  drawPattern(pattern_pirineos, 10, yOffset + pattern_height + 5);
  delay(1500);  // Hold the orange pattern for 1.5 seconds

  // Peak of autumn with rich reds and oranges
  drawPattern(pattern_embalse_mequinenza, 10, yOffset + 2 * (pattern_height + 5));
  delay(1500);  // Hold the red rock and water pattern for 1.5 seconds
}

void displayAutumnArrival(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("Otoño llega a Aragón");

  // Display the first hints of autumn (the green and yellow landscapes)
  drawPattern(pattern_sierra_albarracin, xOffset, yOffset + 30);
  delay(2000);
}

void displayChangingLandscapes(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("Los paisajes cambian");

  // Display the landscape transitioning from green to red
  drawPattern(pattern_sierra_albarracin, xOffset, yOffset + 40);
  delay(2000);

  drawPattern(pattern_pirineos, xOffset, yOffset + 60);
  delay(2000);

  drawPattern(pattern_embalse_mequinenza, xOffset, yOffset + 80);
  delay(2000);
}

void displayPeakAutumn(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("El pico de otoño");

  // Display the peak autumn colors with full reds and oranges
  drawPattern(pattern_pirineos, xOffset, yOffset + 40);
  delay(2000);

  drawPattern(pattern_embalse_mequinenza, xOffset, yOffset + 60);
  delay(2000);
}

void displayQuietAutumn(int xOffset, int yOffset) {
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(2);
  tft.setCursor(xOffset, yOffset);
  tft.println("El otoño tranquilo");

  // Display the serene, calming autumn landscape
  drawPattern(pattern_sierra_albarracin, xOffset, yOffset + 40);
  delay(2000);
}

void setup() {
  // Initialize TFT screen
  tft.init();
  tft.setRotation(0);  // Set screen rotation to normal
  tft.fillScreen(TFT_BLACK);  // Clear screen to black

  // Tell the story of autumn in Aragón with patterns
  int xOffset = 10;
  int yOffset = 10;

  // 1. The Arrival of Autumn
  displayAutumnArrival(xOffset, yOffset);

  // 2. Changing Landscapes
  displayChangingLandscapes(xOffset, yOffset + 40);

  // 3. The Peak of Autumn
  displayPeakAutumn(xOffset, yOffset + 90);

  // 4. Quiet, Tranquil Autumn
  displayQuietAutumn(xOffset, yOffset + 140);
}

void loop() {
  // In this demo, we display a sequence of autumn-themed patterns once. You could loop it or add more interactions.
}
