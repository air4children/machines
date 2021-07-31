# Showcasing gestures 
This example show gestures of the robot!

## Blocks   
* Sounds   
![f](Screenshot%20from%202021-07-31%2018-45-22.png)
* Gestures     
![i](Screenshot%20from%202021-07-31%2018-32-20.png)
 

## C-based code
* Gestures   
```  
#include <US.h>
#include <Otto9Humanoid.h>
Otto9Humanoid Otto;

int distance;
bool obstacleDetected = false;

#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_YL 2 // left leg, servo[0]
#define PIN_YR 3 // right leg, servo[1]
#define PIN_RL 4 // left foot, servo[2]
#define PIN_RR 5 // right foot, servo[3]
#define PIN_LA 6 //servo[4]  Left arm
#define PIN_RA 7 //servo[5]  Right arm
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_NoiseSensor A6
#define PIN_Buzzer  13 //buzzer

#define DIN_PIN A3
#define CS_PIN A2
#define CLK_PIN A1
#define LED_DIRECTION 1

void setup() {
  Otto.initHUMANOID(PIN_YL, PIN_YR, PIN_RL, PIN_RR, PIN_LA, PIN_RA, true, PIN_NoiseSensor, PIN_Buzzer, PIN_Trigger, PIN_Echo);
  Otto.initMATRIX( DIN_PIN, CS_PIN, CLK_PIN, LED_DIRECTION);
}

void loop() {
  if ((Otto.getDistance() <10)) {
    Otto.playGesture(OttoSuperHappy);
    Otto.playGesture(OttoHappy);
    Otto.playGesture(OttoSad);
    Otto.playGesture(OttoSleeping);
    Otto.playGesture(OttoConfused);
    Otto.playGesture(OttoFretful);
    Otto.playGesture(OttoLove);
    Otto.playGesture(OttoAngry);
    Otto.playGesture(OttoMagic);
    Otto.playGesture(OttoWave);
    Otto.playGesture(OttoVictory);
    Otto.playGesture(OttoFail);
    Otto.playGesture(OttoFart);
  }

}
```

* Sounds   
```  

#include <US.h>
#include <Otto9Humanoid.h>
Otto9Humanoid Otto;

int distance;
bool obstacleDetected = false;

#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_YL 2 // left leg, servo[0]
#define PIN_YR 3 // right leg, servo[1]
#define PIN_RL 4 // left foot, servo[2]
#define PIN_RR 5 // right foot, servo[3]
#define PIN_LA 6 //servo[4]  Left arm
#define PIN_RA 7 //servo[5]  Right arm
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_NoiseSensor A6
#define PIN_Buzzer  13 //buzzer

void setup() {
  Otto.initHUMANOID(PIN_YL, PIN_YR, PIN_RL, PIN_RR, PIN_LA, PIN_RA, true, PIN_NoiseSensor, PIN_Buzzer, PIN_Trigger, PIN_Echo);
}

void loop() {
  if ((Otto.getDistance() <10)) {
    Otto.sing(S_superHappy);
    Otto.sing(S_happy);
    Otto.sing(S_happy_short);
    Otto.sing(S_sad);
    Otto.sing(S_confused);
    Otto.sing(S_cuddly);
    Otto.sing(S_OhOoh);
    Otto.sing(S_OhOoh2);
    Otto.sing(S_surprise);
    Otto.sing(S_connection);
    Otto.sing(S_disconnection);
    Otto.sing(S_buttonPushed);
    Otto.sing(S_mode1);
    Otto.sing(S_mode2);
    Otto.sing(S_mode3);
    Otto.sing(S_sleeping);
    Otto.sing(S_buttonPushed);
    Otto.sing(S_fart1);
    Otto.sing(S_fart2);
    Otto.sing(S_fart3);
  }

}
```
