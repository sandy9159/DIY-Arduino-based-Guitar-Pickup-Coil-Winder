
# DIY-Arduino-based-Guitar-Pickup-Coil-Winder

![Guitar pickup winder](https://user-images.githubusercontent.com/19898602/122632589-6b403d80-d0f1-11eb-94d0-2e3e98904b68.png)


This is mini Arduino based machine to wind guitar pickup coil.

Hello friends in this post I have made a simple mini 
arduino based guitar pickup coil winding machine. 
Winding hundreds of turn with hand is quite boring & time consuming job.
so I build this mini machine,
I have used two stepper motors in this project and HMI for user interface.
and I have used a multipurpose PCB for this project.


![guitar coil](https://user-images.githubusercontent.com/19898602/122649537-df0f3400-d14b-11eb-91c3-28f42fc6c3fd.JPG)

This is the guitar pickup coil this is the esential part of electric guitars. A single coil pickup is a type of magnetic transducer, 
or pickup, for the electric guitar and the electric bass. It electromagnetically converts the vibration of the strings to an electric signal. 
Single coil pickups are one of the two most popular designs, along with dual-coil or "humbucking" pickups.



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
![FTQFHXZKLBNXU2X](https://user-images.githubusercontent.com/19898602/122632825-db9b8e80-d0f2-11eb-8281-3239f1275adc.jpg)
![147494540_1146948692400891_5797782675789162173_o](https://user-images.githubusercontent.com/19898602/122632834-ee15c800-d0f2-11eb-9385-0bcb4b05119a.jpg)

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

![147560983_1146948889067538_4990854912671411429_o](https://user-images.githubusercontent.com/19898602/122632848-fff76b00-d0f2-11eb-955e-207472be636d.jpg)
![component](https://user-images.githubusercontent.com/19898602/122632849-01289800-d0f3-11eb-970a-53fc1b6e0b58.jpg)


I have design circuit and PCB in [easyEDA](https://easyeda.com/) and ordered PCB from [JLCPCB](JLCPCB.COM)

This is the link of [PCB editabl file](https://oshwlab.com/sharmaz747/multipurpose-pcb)

If you seriously need quality PCB quickly in your hand then you must have to try [JLCPCB](JLCPCB.COM) PCB manufacturing service.
They have Special offer of $2 for 1-4 Layer PCBs, free SMT assembly monthly.
If you get yourself registered today at [JLCPCB](JLCPCB.COM) you get 18$ welcome coupon from [JLCPCB](JLCPCB.COM).


## USER INTERFACE ##
![hmi](https://user-images.githubusercontent.com/19898602/122648798-6490e500-d148-11eb-8201-ceefd997b356.JPG)

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


![nextion](https://user-images.githubusercontent.com/19898602/122649375-277a2200-d14b-11eb-8632-72f7e4cdf741.JPG)


## ARDUINO CODE & HMI CODE ##
Please download the code attached 
to upload HMI code you need to first download and install Nextion HMI editor 
https://nextion.tech/nextion-editor/
please note that HMI code is version sensitive it works on with Nextion NX3224K028 2.8''HMI

