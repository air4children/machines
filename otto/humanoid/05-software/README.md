# Software and its dependencies 

## Cloning project
### Clone GitHub project.

Open a terminal (GNU/Linux) or GitBash (in windows) 
```
cd Desktop/air4children
git clone https://github.com/air4children/robots.git
```
Example of the output
```
$ git clone https://github.com/air4children/robots.git
Cloning into 'robots'...
remote: Enumerating objects: 225, done.
remote: Counting objects: 100% (225/225), done.
remote: Compressing objects: 100% (174/174), done.
remote: Total 225 (delta 59), reused 211 (delta 46), pack-reused 0
Receiving objects: 100% (225/225), 46.09 MiB | 4.19 MiB/s, done.
Resolving deltas: 100% (59/59), done.
```
NOTE. See this [tutorial](https://github.com/mxochicale/github) to learn more about Github.

## Windows 10x64
### Otto DIY
```
1. Download API here: https://github.com/OttoDIY/blockly/releases/tag/v1.4.0
2. Unzip and install.
3. Open the example for Humanoid.
4. Connect your Otto robot.
5. Select Arduino nano, USB port where Otto is connected.
6. Check the code.
7. Upload!
````


## Ubuntu 18.04x64
### Blocky 
```
git clone --single-branch --branch versionlinux https://github.com/ottodiy/blockly
#or: `git clone https://github.com/ottodiy/blockly && git checkout linuxversion`
cd ~/blockly
npm install
sudo chown -R $USER:$(id -gn $USER) /home/$USER/.config
npm start #to test app
npm run compiler #To compile
``` 


* For first time users, see [README](https://github.com/mxochicale/blockly/blob/linux_build/README.md#gnulinux) in the `linux_build` branch.

### Using Arduino 
#### Install Arduino 
1. Download Arduino IDE software for free [here](https://www.arduino.cc/en/Main/Software)﻿
2. Install Arduino IDE software in you computer.


#### Install libraries
Using Arduino IDE>Sketch>Include Library> Add .ZIP library, then search for `OttoDIYLibV9_8665fff.zip` 
to extract its content. Alternatively, you can `OttoDIYLib-master.zip` in `/home/$USERNAME/Arduino/libraries`
[ref](https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/how-to-install-a-library)

#### Upload `OttoH_APP_V9.ino`
3. Connect Arduino nano with USB cable
4. Open Arduino and select: (Board: Arduino Nano, Processor:ATMega328P Port:/dev/ttyUSB0)
5. Upload [OOttoH_APP_V9_4d206f5.ino](libraries/OttoH_APP_V9_4d206f5/OttoH_APP_V9_4d206f5.ino)

#### Potential Issues
For potential issues see [ISSUES](ISSUES.md) which are sorted out.
