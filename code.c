/*
 * Created by Liya G.
 * Created on March 25, 2025
 
 * Uses a sonar
 */

 const int TRIG_PIN = 3;
 const int ECHO_PIN = 2;
 const float SPEED_OF_LIGHT = 0.3403;
 
 float duration, distance;
   
  void setup() 
 {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    Serial.begin(9600);
  }
  
  void loop() 
 {
    digitalWrite(TRIG_PIN, LOW);  
    delayMicroseconds(2);  
    digitalWrite(TRIG_PIN, HIGH);  
    delayMicroseconds(10);  
    digitalWrite(TRIG_PIN, LOW); 
    
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = (duration*SPEED_OF_LIGHT)/2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm")
    delay(100);
  }