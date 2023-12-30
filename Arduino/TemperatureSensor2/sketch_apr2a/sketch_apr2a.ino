const int LM35 = A1; // Declaring which pin we are using on the Arduino for the serial sensor input.
const int relayPin = 8; // Declaring which pin we are using on the Arduino for the relay output.

void setup () { // The code in this scope will only run one time.
  Serial.begin(9600); // Starting the serial input on the Arduino at a rate of 9600
  pinMode (relayPin, OUTPUT);
}

void loop () { // The code in this scope will run infinitely since it is in a loop.
  float lmvalue = analogRead(LM35); 
  // Setting the value that the Arduino reads from the temperature sensor to a variable.

  float tempr = lmvalue*(500/1023); // Converting the voltage it reads to degrees celsius.
  Serial.println(tempr); // Printing out the temperature value calculated to the screen .

  if (tempr < 30){ // Executes the next line if the value we calculated is less than 15 degrees C.
    digitalWrite (relayPin, HIGH); // This will close the loop in the relay, thus turning everything on.
  }
  else { //Executes the next line if the value we calculated is greater than 15 degrees C.
    digitalWrite (relayPin, LOW); // This will open the loop in the relay, thus turning everything off.
  }
  delay(3000); 
  // Whatever part of the if-else statment is executed above will be run for 120000 ms or 2 mins.
}

