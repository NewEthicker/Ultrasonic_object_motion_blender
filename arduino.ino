const int trigPin = 9;     // Trig pin of the ultrasonic sensor
const int echoPin = 10;    // Echo pin of the ultrasonic sensor

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  unsigned long duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  unsigned int distance = duration * 0.034 / 2;

  // Send the distance measurement to Blender
  Serial.print("Distance:");
  Serial.println(distance);
  
//  delay(500);  // Wait before taking the next measurement
}
