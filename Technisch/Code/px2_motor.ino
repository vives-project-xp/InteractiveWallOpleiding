// Pinnen voor de DRV8825 (gebaseerd op eerdere keuzes)
const int stepPin = 2; 
const int dirPin = 3;  

// Pinnen voor de drukknoppen
const int buttonUp = A0;   
const int buttonDown = A1; 

// Pinnen voor de eindschakelaars (Limit Switches)
const int limitTop = A2;    // Schakelaar aan de bovenkant
const int limitBottom = A3; // Schakelaar aan de onderkant

int speedDelay = 800; 

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  
  // Alle knoppen en schakelaars gebruiken de interne pull-up weerstand
  pinMode(buttonUp, INPUT_PULLUP);
  pinMode(buttonDown, INPUT_PULLUP);
  pinMode(limitTop, INPUT_PULLUP);
  pinMode(limitBottom, INPUT_PULLUP);
}

void loop() {
  // Lees de status van de knoppen en schakelaars
  bool upPressed = (digitalRead(buttonUp) == LOW);
  bool downPressed = (digitalRead(buttonDown) == LOW);
  bool atTop = (digitalRead(limitTop) == LOW);
  bool atBottom = (digitalRead(limitBottom) == LOW);

  // LOGICA:
  // 1. Controleer of er NIET op beide knoppen tegelijk wordt gedrukt.
  // 2. Controleer of de betreffende knop is ingedrukt.
  // 3. Controleer of de eindschakelaar in die richting nog NIET is geraakt.

  if (upPressed && !downPressed) { 
    if (!atTop) { // Alleen bewegen als de top nog niet bereikt is
      digitalWrite(dirPin, HIGH); 
      stepMotor();
    }
  }
  else if (downPressed && !upPressed) {
    if (!atBottom) { // Alleen bewegen als de bodem nog niet bereikt is
      digitalWrite(dirPin, LOW);  
      stepMotor();
    }
  }
  // Als beide knoppen zijn ingedrukt (of geen enkele), gebeurt er niets.
}

void stepMotor() {
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(speedDelay);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(speedDelay);
}
