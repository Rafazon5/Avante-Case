int ldrPin = A0; //pino analogico ldr
int ledPin = 2; //pino led
int valorLDR = 0; 

void setup() {
  pinMode(ledPin, OUTPUT); //led como saida
  Serial.begin(9600);
}

void loop() {
  valorLDR = analogRead(ldrPin);
  Serial.println(valorLDR);

  if(valorLDR < 8){
    digitalWrite(ledPin, 1); //quando ldr menor que 8, led acende
  } else {
    digitalWrite(ledPin, 0); //led apaga em >= 8
  }
  delay(200);
}
