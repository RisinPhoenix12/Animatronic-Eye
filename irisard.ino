#include <Servo.h>

Servo servhor;
Servo servver;
int trigPin1 = 6;
int echoPin1 = 5;
int trigPin2 = 3;
int echoPin2 = 2;
int trigPin3 = 9;
int echoPin3 = 7;
int trigPin4 = 13;
int echoPin4 = 12;

void setup()
{
  servhor.attach(10);
  servver.attach(11);
  servhor.write(90);
  servver.write(90);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  
}

void loop()
{
 
    
    digitalWrite(trigPin1, LOW);
    digitalWrite(trigPin2, LOW);
    digitalWrite(trigPin3, LOW);
    digitalWrite(trigPin4, LOW);
    long duration1, distance1, duration2, distance2,duration3,distance3,duration4,distance4;
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(100);
    digitalWrite(trigPin1, LOW);
    duration1 = pulseIn(echoPin1, HIGH);
    distance1 = (duration1 / 2) / 29.1;
    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(100);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = (duration2 / 2) / 29.1;
    digitalWrite(trigPin3, HIGH);
    delayMicroseconds(100);
    digitalWrite(trigPin3, LOW);
    duration3 = pulseIn(echoPin3, HIGH);
    distance3 = (duration3 / 2) / 29.1;
    digitalWrite(trigPin4, HIGH);
    delayMicroseconds(100);
    digitalWrite(trigPin4, LOW);
    duration4 = pulseIn(echoPin4, HIGH);
    distance4 = (duration4 / 2) / 29.1;
      
    

    if ((distance1 < 25))
    {
      servhor.write(50);
      
    }
    else if (distance2 < 25)
    {
      servhor.write(130);
      
    }
    else if ((distance2 > 25) && (distance1 > 25))
    {
      servhor.write(90);
      
          }
    
    if ((distance3 < 25))
    {
      servver.write(50);
      
    }
    else if (distance4 < 25)
    {
      servver.write(130);
     
    }
    else if ((distance3 > 25) && (distance4 >25))
    {
      servver.write(90);
      
    }
  }
