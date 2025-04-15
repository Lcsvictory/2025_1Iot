#include <LedToggle.h>

LedToggle led(LED_BUILTIN, 50);

void setup(){
}

void loop() {
  led.toggle();
}