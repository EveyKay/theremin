// C++ code
//
int sound = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  sound = (0.01723 * readUltrasonicDistance(7, 7) / 3);
  tone(8, 440 * pow(2.0, (constrain(int(sound), 35, 127) - 57) / 12.0), 50);
  delay(10); // Delay a little bit to improve simulation performance
}