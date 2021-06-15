#include <Stepper.h>
#include <Arduino.h>
#include "BasicStepperDriver.h"
#include "MultiDriver.h"
#include "SyncDriver.h"
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX
int A = 0;
int B = 0;
int C = 0;
int L = 40;
int state = 0;
int EN = 12;
String message;
int QTY, numMessages, endBytes;
byte inByte;
int flag = 0;



#define DIR_X 14
#define STEP_X 15
#define DIR_Y 16
#define STEP_Y 17
#define MICROSTEPS 16
#define MOTOR_STEPS 200

int count = 0;
BasicStepperDriver stepperX(MOTOR_STEPS, DIR_X, STEP_X);
BasicStepperDriver stepperY(MOTOR_STEPS, DIR_Y, STEP_Y);
SyncDriver controller(stepperX, stepperY);


void setup()
{ 
  pinMode(EN,OUTPUT);
  digitalWrite(EN,HIGH);
  numMessages, endBytes = 0;
  Serial.begin(9600);
  mySerial.begin(9600);
  stepperX.begin(250, MICROSTEPS);
  stepperY.begin(250, MICROSTEPS);
  delay(500);
}

void loop()
{
  data();
  if (A > 0 && B > 0 && C > 0) {
    digitalWrite(EN,LOW);
if (count <= C){

  
for (int i = 0; i <= L; i++){
  if (count > C){
break;
  }
controller.rotate(360,40);
mySerial.print("n2.val=");
mySerial.print(count);
mySerial.write(0xff);
mySerial.write(0xff);
mySerial.write(0xff);
count++;  
}

for (int i = 0; i <= L; i++){
if (count > C){
break;
  }
controller.rotate(360,-40);  
mySerial.print("n2.val=");
mySerial.print(count);
mySerial.write(0xff);
mySerial.write(0xff);
mySerial.write(0xff);
count++;
}
}   
}
}


void data() {
    if (state == 0) {
      if (numMessages == 1) { //Did we receive the anticipated number of messages? In this case we only want to receive 1 message.
        A = QTY;
        Serial.println(A);//See what the important message is that the Arduino receives from the Nextion
        numMessages = 0; //Now that the entire set of data is received, reset the number of messages received
        state = 1;
      }
    }

    if (state == 1) {
      if (numMessages == 1) { //Did we receive the anticipated number of messages? In this case we only want to receive 1 message.
        B = QTY;
        Serial.println(B);//See what the important message is that the Arduino receives from the Nextion
        numMessages = 0; //Now that the entire set of data is received, reset the number of messages received
        state = 2;
      }
    }

if (state == 2) {
      if (numMessages == 1) { //Did we receive the anticipated number of messages? In this case we only want to receive 1 message.
        C = QTY;
        Serial.println(C);//See what the important message is that the Arduino receives from the Nextion
        numMessages = 0; //Now that the entire set of data is received, reset the number of messages received
        state = 0;
      }
    }
    






    if (mySerial.available()) { //Is data coming through the serial from the Nextion?
      inByte = mySerial.read();

      // Serial.println(inByte); //See the data as it comes in

      if (inByte > 47 && inByte < 58) { //Is it data that we want to use?
        message.concat(char(inByte)); //Cast the decimal number to a character and add it to the message
      }
      else if (inByte == 255) { //Is it an end byte?
        endBytes = endBytes + 1; //If so, count it as an end byte.
      }

      if (inByte == 255 && endBytes == 3) { //Is it the 3rd (aka last) end byte?
        QTY = message.toInt(); //Because we have now received the whole message, we can save it in a variable.
        message = ""; //We received the whole message, so now we can clear the variable to avoid getting mixed messages.
        endBytes = 0; //We received the whole message, we need to clear the variable so that we can identify the next message's end
        numMessages  = numMessages + 1; //We received the whole message, therefore we increment the number of messages received.

        //Now lets test if it worked by playing around with the variable.

      }
    }
  }
