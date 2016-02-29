const int buttonPin = 2;
const int ledPin1 = 9;
const int ledPin2 = 3;
int buttonState = 0;
 

void setup()//this the comands of the which component is which.
{
  pinMode(ledPin1, OUTPUT);//the LED is an output sorce.
  pinMode(ledPin2, OUTPUT);//the LED is an output sorce.
  pinMode(buttonPin, INPUT);//this is an input sorce mening it is taking in information from the button/pump
}

 void loop()//this is telling it to continuously follow this command when the arduino is on 
 {
   buttonState = digitalRead(buttonPin);
   if (buttonState == LOW)
   {
     digitalWrite(ledPin1, HIGH);//this means that the LED/pump is off.
     digitalWrite(ledPin2, HIGH);//this means that the LED/pump is off.
   }
   else
   {
     digitalWrite(ledPin1, LOW);//this means that the LED/pump is on.
     delay(300000);//1000 is 1 second, 300000 is 5 minutes.
     digitalWrite(ledPin1, HIGH);//this means that the LED/pump is off.
     delay(3300000);//1000 is 1 second, 3300000 is 2 hours and 55 minutes.
     digitalWrite(ledPin2, LOW);//this means that the LED/pump is on.
     delay(300000);//1000 is 1 second, 300000 is 5 minutes.
     digitalWrite(ledPin2, HIGH);//this means that the LED/pump is off.
     delay(3300000);//1000 is 1 second, 3300000 is 2 hours and 55 minutes.
   }
 } 
  
