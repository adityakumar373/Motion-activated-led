//connect pir sensor with digital pin 2
const int pir=2;
//connect led with digital pin 13
const int led=13;
int pirState = LOW;     // Current state of PIR pin
int val = 0;            // Variable to store PIR sensor reading
void setup() 
{
  //set pir as input
  pinMode(pir,INPUT);
  //set led as output
  pinMode(led,OUTPUT);
  //set baud rate as 9600
  serial.begin(9600); //start serial monitor for debugging
}
void loop() 
{
 val=digitalRead(pir);  //read pir sensor input
  if(val==HIGH)
  {
    digitalWrite(led,HIGH); //turn ON Led
    if (pirState == LOW) 
    {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  }
  else
  {
    digitalWrite(led,LOW); Turn Off Led
    if(pirState==HIGH)
    {
      serial.println("Motion Ended!");
      pirState = LOW;
    }
  }
    delay(100); // Small delay for stability
}
