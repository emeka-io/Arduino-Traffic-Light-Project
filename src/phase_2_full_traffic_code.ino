// Defining pins based on wiring
const int greenLED  = 11;
const int yellowLED = 12;
const int redLED    = 13;

void setup() {
  // Set all LED pins as outputs
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // 1. GREEN LIGHT (GO) - 5 seconds
  digitalWrite(greenLED, HIGH);
  delay(5000); 
  digitalWrite(greenLED, LOW);

  // 2. YELLOW LIGHT (CAUTION) - 1.5 seconds
  digitalWrite(yellowLED, HIGH);
  delay(2000); 
  digitalWrite(yellowLED, LOW);

  // 3. RED LIGHT (STOP) - 5 seconds
  digitalWrite(redLED, HIGH);
  delay(5000);
  digitalWrite(redLED, LOW);
}
