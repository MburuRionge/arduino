#define GAS_PIN 20
#define LED_PIN 19
#define BUZZER_PIN 3

void setup() {
  pinMode(GAS_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(GAS_PIN);
  Serial.print("Gas Level: ");
  Serial.print(gasLevel);
  Serial.print("\t");

  if (gasLevel > 1000) {
    Serial.println("Gas detected");
    digitalWrite(LED_PIN, HIGH); // Turn LED on

    tone(BUZZER_PIN, 262); // Generate 262 Hz sound on the buzzer
    delay(1000);           // Keep the sound on for 1 second
    noTone(BUZZER_PIN);    // Turn off the buzzer
    digitalWrite(LED_PIN, LOW); // Turn off LED
  } else {
    Serial.println("No Gas");
  }
  delay(100);
}