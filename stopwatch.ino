#include <LiquidCrystal.h>

LiquidCrystal lcd(9, 8, 2, 3, 4, 5);

const int buttonPin = 10;
const int pin12 = 12;

bool running = false;
unsigned long startTime = 0;
unsigned long elapsedTime = 0;

bool lastButtonState = HIGH;
unsigned long pressStart = 0;

void setup() {
  lcd.begin(16, 2);

  pinMode(buttonPin, INPUT_PULLUP);

  pinMode(pin12, OUTPUT);
  digitalWrite(pin12, LOW);

  lcd.clear();
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  // pressed
  if (lastButtonState == HIGH && buttonState == LOW) {
    pressStart = millis();
  }

  // released
  if (lastButtonState == LOW && buttonState == HIGH) {
    unsigned long pressLength = millis() - pressStart;

    if (pressLength >= 1000) {
      // hold = reset
      running = false;
      elapsedTime = 0;
    } else {
      // tap = start/stop
      if (running) {
        elapsedTime = millis() - startTime;
        running = false;
      } else {
        startTime = millis() - elapsedTime;
        running = true;
      }
    }
  }

  lastButtonState = buttonState;

  unsigned long displayTime =
      running ? millis() - startTime : elapsedTime;

  unsigned long minutes = displayTime / 60000;
  unsigned long seconds = (displayTime / 1000) % 60;
  unsigned long hundredths = (displayTime % 1000) / 10;

  lcd.setCursor(0, 0);
  lcd.print("Stopwatch       ");

  lcd.setCursor(0, 1);

  if (minutes < 10) lcd.print("0");
  lcd.print(minutes);
  lcd.print(":");

  if (seconds < 10) lcd.print("0");
  lcd.print(seconds);
  lcd.print(":");

  if (hundredths < 10) lcd.print("0");
  lcd.print(hundredths);

  lcd.print("   ");
}
