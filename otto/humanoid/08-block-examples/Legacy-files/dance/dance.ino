#include <Otto9.h>
Otto9 Otto;

#define PIN_YL 2 // left leg, servo[0]
#define PIN_YR 3 // right leg, servo[1]
#define PIN_RL 4 // left foot, servo[2]
#define PIN_RR 5 // right foot, servo[3]
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_Buzzer  13 //buzzer

void setup() {
  Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, A6, PIN_Buzzer, PIN_Trigger, PIN_Echo);
}

void loop() {
  for (int count=0 ; count<2 ; count++) {
    Otto.walk(1,1000,1); // FORWARD
  }
  for (int count=0 ; count<2 ; count++) {
    Otto.tiptoeSwing(1, 1000, 25);
  }
  for (int count=0 ; count<5 ; count++) {
    Otto.moonwalker(1, 1000, 40, 1);
  }
  for (int count=0 ; count<5 ; count++) {
    Otto.moonwalker(1, 1000, 40, -1);
  }
  for (int count=0 ; count<5 ; count++) {
    Otto.crusaito(1, 1000, 40, 1);
    Otto.crusaito(1, 1000, 40, -1);
  }

}