// Created on: Sep 2020
// Created by: Mr Coxall
// Created for: This is the code for a full adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int Carry_In = 11;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  pinMode(Carry_In, OUTPUT);
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(Carry_In, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)

  for (int onesA = 0; onesA <= 1; ++onesA) {
    digitalWrite(DIGIT_A1, onesA);
    for (int onesB = 0; onesB <= 1; ++onesB) {
      digitalWrite(DIGIT_B1, onesB);
      for (int CIN = 0; CIN <= 1; ++CIN) {
        digitalWrite(Carry_In, CIN);
      
      Serial.print("A1 = " + String(onesA) + "\n");
      Serial.print("B1 = " + String(onesB) + "\n");
      Serial.print("Cin = " + String(CIN) + "\n");
      Serial.print(String(CIN) + " + " + String(onesA) + " + " + String(onesB) " = " + String(onesA + onesB + CIN) + "\n\n"));
      delay(2000); // Wait for 2000 millisecond(s)
    }
  }
}

void loop()
{
  // Done
  Serial.print("\nDone. \n");
  delay(10000); // Wait for 10000 millisecond(s)
// Created on: Sep 2020
// Created by: Mr Coxall
// Created for: This is the code for a 1/2 adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)

  for (int onesA = 0; onesA <= 1; ++onesA) {
    digitalWrite(DIGIT_A1, onesA);
    for (int onesB = 0; onesB <= 1; ++onesB) {
      digitalWrite(DIGIT_B1, onesB);
      
      Serial.print("A1 = " + String(onesA) + "\n");
      Serial.print("B1 = " + String(onesB) + "\n");
      Serial.print(String(onesA) + " + " + String(onesB) + " = " + String(onesA + onesB) + "\n\n");
      delay(2000); // Wait for 2000 millisecond(s)
    }
  }
}

void loop()
{
  // Done
  Serial.print("\nDone. \n");
  delay(10000); // Wait for 10000 millisecond(s)
}
