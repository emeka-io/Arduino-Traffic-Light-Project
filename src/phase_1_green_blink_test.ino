/*
 * Project: Green LED Timing Test (Phase 1)
 * Author: Emeka (@emekabuilds_ On X)
 * Date: April 2026
 * Description: Verifies breadboard continuity and basic timing logic.
 * Circuit: 
 * - LED Anode (Long Leg): Row 10E
 * - Resistor: Bridges Row 10D to 19D
 * - Control: Arduino Pin 11 to Row 19E
 */

const int greenLED = 11; 

void setup() {
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // 2 seconds ON
  digitalWrite(greenLED, HIGH); 
  delay(2000); 

  // 1 second OFF
  digitalWrite(greenLED, LOW);  
  delay(1000); 
}
