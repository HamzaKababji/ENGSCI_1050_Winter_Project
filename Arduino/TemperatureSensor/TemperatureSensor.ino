float temp;	// temperature 
int tempInput = A0;	// input pin for LM35
const int relayPin = 8;	// output pin which tells relay to be on or off

void setup() {
  Serial.begin(9600);
  
  pinMode(relayPin, OUTPUT); // initialize D7 as output
}

void loop() {
  temp = analogRead(tempInput) * 0.1309; // read temperature from sensor
  Serial.println(temp);
  
  if(temp < 30) {
    digitalWrite(relayPin, HIGH); // if temp is below 20*C, let power through relay
  } else {
    digitalWrite(relayPin, LOW); // if temp is above 20*C, don't let power through relay
  }
  
  delay(3000); // adjust temperature every 3s (3000ms)
}