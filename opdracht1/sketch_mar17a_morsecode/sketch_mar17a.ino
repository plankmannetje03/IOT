void setup() {
  // put your setup code here, to run once:

 pinMode(D3, OUTPUT);
 pinMode(D5, OUTPUT);
 pinMode(D6, OUTPUT);
 
}


const int ledPin = 13;


const String morseCode = "-.. .- .- -.";

void loop() {
  for (int i = 0; i < morseCode.length(); i++) {
    char symbol = morseCode[i];  

    if (symbol == '.') {
      blinkDot();  
    } else if (symbol == '-') {
      blinkDash();  
    } else if (symbol == ' ') {
      delay(1000); 
    }

    delay(300);  
  }

  delay(3000);  
}

void blinkDot() {
  digitalWrite(ledPin, HIGH);  
  delay(250);                  
  digitalWrite(ledPin, LOW);   
  delay(250);              
}

void blinkDash() {
  digitalWrite(ledPin, HIGH);  
  delay(750);                  
  digitalWrite(ledPin, LOW);   
  delay(250);                  
}









