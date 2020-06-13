# Software

## Install Arduino 
1. Download Arduino IDE software for free [here](https://www.arduino.cc/en/Main/Software)﻿
2. Install Arduino IDE software in you computer.


## Install libraries
Extract `OttoDIYLib-master.zip` in `/home/$USERNAME/Arduino/libraries`
[ref](https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/how-to-install-a-library)

## Upload `OttoHumanoid_V9.ino`
3. Connect Arduino nano with USB cable
4. Open Arduino and select: (Board: Arduino Nano, Processor:ATMega328P Port:/dev/ttyUSB0)
5. Upload [OttoHumanoid_V9.ino](libraries/OttoHumanoid_V9.ino)


## issues
* `avrdude: ser_open(): can't open device "/dev/ttyUSB0": Permission denied`  
SORTED:
```   
sudo usermod -a -G dialout $USER
sudo chmod a+rw /dev/ttyUSB0
```
[ref](https://askubuntu.com/questions/1056314/uploading-code-to-arduino-gives-me-the-error-avrdude-ser-open-cant-open-d)

* `avrdude: stk500_recv(): programmer is not responding`  
SORTED OUT: For processor choose: ATMega328P 

* `(.text+0x0): multiple definition of __vector_4` when wploading [OttoHumanoid_V9.ino](libraries/OttoHumanoid_V9.ino)
    * https://forum.mysensors.org/topic/999/solved-how-to-get-softwareserial-to-work-on-the-serialgateway/4
    * https://github.com/MarlinFirmware/Marlin/issues/9221 
    