/*
  BurnBabyBurn
  Wait a while, turn on a MOSFET, burn some stuff up.
  */

#define kControlPin 10
#define kStatusLEDPin 17
#define kMinutesToWait 180
#define kSecondsToBurn 15

void setup() {
  // Initialize the digital pin as an output.
  pinMode(kControlPin, OUTPUT);     
  pinMode(kStatusLEDPin, OUTPUT);  
}

void loop() {
  // Wait for a while
  for (int i = 0; i < kMinutesToWait; i++) {
    delay(60000);
  }

  // Turn on the MOSFET
  digitalWrite(kControlPin, HIGH);
  digitalWrite(kStatusLEDPin, HIGH);

  // Burn baby burn
  delay(kSecondsToBurn * 1000);

  // Turn off MOSFET
  digitalWrite(kControlPin, LOW);
  digitalWrite(kStatusLEDPin, LOW);

  // Some delay maybe makes it easier to program Atmega32u based microcontrollers
  while(true) delay(1000);
}
