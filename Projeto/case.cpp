int irPin = 9;    // pino IR
int ldrPin = A0;  // pino LDR
int ledPin = 2;   // pino LED

void setup() {
  pinMode(irPin, INPUT); //entrada
  pinMode(ledPin, OUTPUT); //saida
  Serial.begin(9600);
}

void loop() {
  int valorIR = digitalRead(irPin);
  int valorLDR = analogRead(ldrPin);

  Serial.print("LDR: ");
  Serial.print(valorLDR);
  Serial.print(" IR: ");
  Serial.println(valorIR); //para printar os valores do LDR e IR

  if (valorLDR < 100 && valorIR == 0) { 
    digitalWrite(ledPin, 1); //led acende
  } else {
    digitalWrite(ledPin, 0); //led apaga
  }
  delay(200);
}
