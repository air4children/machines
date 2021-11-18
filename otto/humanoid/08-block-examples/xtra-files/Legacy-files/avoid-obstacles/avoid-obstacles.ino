#include <US.h>
#include <Otto9.h>
Otto9 Otto;

int distance;
bool obstacleDetected = false;

#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
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
  if (Otto.getDistance() < 15) {
    Otto.playGesture(OttoConfused);
    for (int count=0 ; count<3 ; count++) {
      Otto.turn(1,1000,1); // LEFT
    }
  }
  Otto.walk(1,1000,1); // FORWARD

}