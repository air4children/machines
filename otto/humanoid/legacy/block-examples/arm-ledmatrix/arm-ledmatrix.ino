#include <Otto9Humanoid.h>
Otto9Humanoid Otto;

const char data[] = "VARIABLE#";
unsigned long int matrix;
int moveSize = 20;

#define PIN_YL 2 // left leg, servo[0]
#define PIN_YR 3 // right leg, servo[1]
#define PIN_RL 4 // left foot, servo[2]
#define PIN_RR 5 // right foot, servo[3]
#define PIN_LA 6 //servo[4]  Left arm
#define PIN_RA 7 //servo[5]  Right arm
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_NoiseSensor A6
#define PIN_Buzzer  13
#define DIN_PIN A3
#define CS_PIN A2
#define CLK_PIN A1
#define LED_DIRECTION 1
#define DIN_PIN A3
#define CS_PIN A2
#define CLK_PIN A1
#define LED_DIRECTION 1

void setup() {
  Otto.initHUMANOID(PIN_YL, PIN_YR, PIN_RL, PIN_RR, PIN_LA, PIN_RA, true, PIN_NoiseSensor, PIN_Buzzer, PIN_Trigger, PIN_Echo);
  Otto.initMATRIX( DIN_PIN, CS_PIN, CLK_PIN, LED_DIRECTION);
}

void loop() {
  Otto.playGesture(OttoHappy);
  Otto.writeText ( "HI",100); // limited to CAPITAL LETTERS NUMBERS : ; < >  = @, MAX.9 characters
  Otto.home();
  Otto.walk(1,1000,1); // FORWARD
  Otto.writeText ( "R2D2",100); // limited to CAPITAL LETTERS NUMBERS : ; < >  = @, MAX.9 characters
  Otto.playGesture(OttoLove);
  matrix = 0b010010111111111111011110001100;
  Otto.putMouth(matrix, false);
  Otto.sing(S_cuddly);
  Otto.swing(1, 750, 40);
  Otto.handwave(1);
  Otto.handwave(-1);
  Otto.putMouth(tongueOut);
  Otto.handsup();
  delay(1*1000);

}