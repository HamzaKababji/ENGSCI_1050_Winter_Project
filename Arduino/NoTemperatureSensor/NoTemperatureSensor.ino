const int relayPin = 8; // Declaring which pin we are using on the Arduino for the relay output.

void setup() { // The code in this scope will only run one time.
  pinMode(relayPin, OUTPUT); // Declaring the relay connection to the Arduino as an output.
}

void loop() { // The code in this scope will run infinitely since it is in a loop.
  digitalWrite(relayPin, HIGH); // This will close the loop in the relay, thus turning everything on.
  delay(120000); // The above line will execute for 120000 ms or 2 mins.

  digitalWrite(relayPin, LOW); // This will open the loop in the relay, thus turning everything off.
  delay(30000); // The above line will execute for 30000 ms or 30 seconds.
} 





