# Potential issues

## avrdude: ser_open() 
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
     

## bluetooh dongle connected  
Raised [issue](https://wikifactory.com/+OttoDIY/humanoid/issues/errors-avrdude-stk500recv-avrdude-stk500getsync) 
 that is partially sorted out by disconnecting the bluetoothdongle
 
