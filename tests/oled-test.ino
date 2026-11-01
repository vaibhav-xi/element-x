#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

Adafruit_SH1106G display(128, 64, &Wire, -1);

void setup() {
  Wire.begin();
  Wire.setClock(100000);

  if (!display.begin(0x3C, true)) {
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);

  display.setCursor(10, 14);
  display.println("ELEMENT - X");

  display.setCursor(10, 26);
  display.println("DISPLAY ONLINE");

  display.setCursor(10, 38);
  display.println("I2C: OK");

  display.setCursor(10, 50);
  display.println("UNO: READY");

  display.display();
}

void loop() {}