# EXTRAS

## Using Arduino 
### Install Arduino 
1. Download Arduino IDE software for free [here](https://www.arduino.cc/en/Main/Software)
2. Install Arduino IDE software in you computer.

### Install libraries
Using Arduino IDE>Sketch>Include Library> Add .ZIP library, then search for `OttoDIYLibV9_8665fff.zip` 
to extract its content. Alternatively, you can `OttoDIYLib-master.zip` in `/home/$USERNAME/Arduino/libraries`
[ref](https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/how-to-install-a-library)

#### Upload `OttoH_APP_V9.ino`
3. Connect Arduino nano with USB cable
4. Open Arduino and select: (Board: Arduino Nano, Processor:ATMega328P Port:/dev/ttyUSB0)
5. Upload [OOttoH_APP_V9_4d206f5.ino](libraries/OttoH_APP_V9_4d206f5/OttoH_APP_V9_4d206f5.ino)


## Potential issues

### avrdude: ser_open() 
`avrdude: ser_open(): can't open device "/dev/ttyUSB0": Permission denied`  
SORTED:
```   
sudo usermod -a -G dialout $USER
sudo chmod a+rw /dev/ttyUSB0
```
[ref](https://askubuntu.com/questions/1056314/uploading-code-to-arduino-gives-me-the-error-avrdude-ser-open-cant-open-d)

## avrdude: stk500_recv() 
`avrdude: stk500_recv(): programmer is not responding`  
    * SORTED OUT: For processor choose: ATMega328P 
 
## (.text+0x0): multiple definition of __vector_4  
 `(.text+0x0): multiple definition of __vector_4` when wploading [OttoHumanoid_V9.ino](libraries/OttoHumanoid_V9.ino)
    * https://forum.mysensors.org/topic/999/solved-how-to-get-softwareserial-to-work-on-the-serialgateway/4
    * https://github.com/MarlinFirmware/Marlin/issues/9221 
    * asking for help to Camilo Parra [here](https://wikifactory.com/+OttoDIY/humanoid/issues/error-compiling-for-board-arduino-nano-text0x0-multiple-definition-of-vector3)  
    SORTEDOUT by using new codes here use new codes here https://wikifactory.com/+OttoDIY/humanoid/files/Codes/OttoH_APP_V9 (4d206f5)   
     

### Bluetooth dongle connected  
Raised [issue](https://wikifactory.com/+OttoDIY/humanoid/issues/errors-avrdude-stk500recv-avrdude-stk500getsync) 
 that is partially sorted out by disconnecting the bluetoothdongle

### Error: Command failed: /home/mx19/.OttoBlockly/arduino/flash.sh /dev/ttyUSB0 nano avrdude
Terminal output 
```commandline
Error: Command failed: /home/mx19/.OttoBlockly/arduino/flash.sh /dev/ttyUSB0 nano avrdude: stk500_recv(): programmer is not responding avrdude: stk500_getsync() attempt 1 of 10: not in sync: resp=0x00 avrdude: stk500_recv():
```

Seems the problem is indeed the selected micro-controller as agomezar mentioned here https://github.com/OttoDIY/blockly/issues/38#issuecomment-691625447. 
Therefore, for the board choose `Arduino Nano` instead of `Arduino Nano (oldbootloader)`

DATE: Sun 15 Aug 10:49:01 BST 2021

