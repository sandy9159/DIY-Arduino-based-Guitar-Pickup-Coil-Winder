# DIY-Arduino-based-Guitar-Pickup-Coil-Winder
This is mini Arduino based machine to wind guitar pickup coil.

Hello friends in this post I have made a simple mini 
arduino based guitar pickup coil winding machine. 
Winding hundreds of turn with hand is quite boring & time consuming job.
so I build this mini machine,
I have used two stepper motors in this project and HMI for user interface.
and I have used a multipurpose PCB for this project.

## VIDEO ##
First of all please watch the complete video I have shown there
complete steps how to build a pickup coil winder machine 
https://youtu.be/xya4ipu7bTk


## COMPONENT USED ##
Followings are the components used in this project.
1. Arduino Nano                 - https://amzn.to/3gnjnRV
2. NEMA 17 stepper motor 2nos.  - https://amzn.to/3cIgkBI
3. A4988 driver IC 2nos.        - https://amzn.to/3xp1vMu
4. SK8 Shaft holder             - https://amzn.to/3xgw8U2
5. 8mm SS rod 100mm long 2nos.  - https://amzn.to/3xmkLtL
6. 8mm Liner bearing LMK8LUU    - https://amzn.to/3gld813
7. 8mm T8 NUT                   - https://amzn.to/2RW2ch7
8. 8MM T8 Lead screw 100mm long - https://amzn.to/2RW2ch7
9. Stepper motor coupler        - https://amzn.to/35nDBF8
10. Nextion NX3224K028 2.8''HMI - https://amzn.to/2TuYOu7


## MULTIPURPOSE PCB ##
Making such projects without PCB is night mare yes trust me
you cannot get wanted result and professional touch in your project if you ignore PCB
So some days back I have developed my Multipurpose PCB.
This PCB is used to build wide range of arduino projects 

followings are the some features of PCB

1. Wide range of power input 9V to 24V DC
2. Cross polarity protection
3. DC motor voltage selection 9V or 12 V DC
4. Servo motor voltage selection 5V or 9V DC
5. Manual microstepping setting for stepper motor
6. Power indication LED
7. L298N IC for heavier DC motor
8. ON board 5V and 9V regulator no need to arrange different power sources
9. Header pins and screw terminals for easy connections

List of the Components you can connect to the PCB

1. 2 DC motor ( 9V to 24V DC)
2. 2 Potentiometer
3. 2 Servo motors ( 5V to 9V DC)
4. 1 Serial device (BT module, HMI, Communication module, RX, TX)
5. 1 Encoder (2 interrupt pin & 1 PB pin)
6. 1 I2C device (SCL/SDA Device, display, MPU6050 etc)
7. 2 Stepper motors

I have design circuit and PCB in easyEDA and ordered PCB from JLCPCB.COM

JLCPCB.COM are the world leader in PCB manufacturing there PCB production rates are very much affordable and they 
have world class PCB production unit results fast PCB production.

If you Need this PCB below is the link of PCB 
https://oshwlab.com/sharmaz747/multipurpose-pcb

Recently i came to know about PCB + SMT service of JLCPCB.COM like JLCPCB offering complete PCB with components solder on it. they have huge collection of components to choose from. this was so much help full for me it save my lots of time and money by using PCB + SMT service of https://jlcpcb.com/IAT and now there is also one good news for you you can now earn 10$ coupon for from JLCPCB just use https://easyeda.com/editor to design your PCB and order it from https://jlcpcb.com/IAT Design & Order on EasyEDA, PCB+SMT $10 Off: https://easyeda.com/editor Get $10 coupon & Join JLC&EDA Group: https://jlcpcb.com/EDA https://www.youtube.com/watch?v=rUtlYrG-U5g Watch full video https://www.youtube.com/watch?v=R9FUyvKBm8k

## USER INTERFACE ##
In order to do winding user have to provide following data
1. Wire dia
2. Width of Coil
3. Number of turn

for user interface I have used a Netion HMI 2.8" Using HMI is very good for such projects
because you will get nice cool user interface and no need to do wiring for any other components like
push buttons, knob, sliders etc.
all of such components we can design in HMI it self
This HMI is embedded with STM32 uController on board means there is no extra load of 
GUI on arduino only Serial communication between arduino and HMI.


## ARDUINO CODE & HMI CODE ##
Please download the code attached 
to upload HMI code you need to first download and install Nextion HMI editor 
https://nextion.tech/nextion-editor/
please note that HMI code is version sensitive it works on with Nextion NX3224K028 2.8''HMI

