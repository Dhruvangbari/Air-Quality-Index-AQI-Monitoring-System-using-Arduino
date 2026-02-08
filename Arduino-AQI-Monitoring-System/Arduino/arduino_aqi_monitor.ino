/*
 Air Quality Index (AQI) Monitoring System using Arduino UNO
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

const int airSensorPin = A0;
const int buzzerPin = 8;
const int redLed = 9;
const int greenLed = 10;

int airValue = 0;
int threshold = 350;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("AQI MONITOR");
  lcd.setCursor(0, 1);
  lcd.print("SYSTEM READY");
  delay(2000);
  lcd.clear();
}

void loop() {
  airValue = analogRead(airSensorPin);

  lcd.setCursor(0, 0);
  lcd.print("Air Value: ");
  lcd.print(airValue);
  lcd.print(" ");

  if (airValue > threshold) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Status: POOR ");
  } else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Status: GOOD ");
  }

  delay(1000);
}
