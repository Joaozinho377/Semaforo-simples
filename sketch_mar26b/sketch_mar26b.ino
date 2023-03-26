//Semáforo

//Variavéis
int ledVermelho = 7;
int ledVerde = 10;
int ledAmarelo = 13;


void setup(){
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
}

void loop(){
  digitalWrite(ledVermelho, HIGH);
    delay(20000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  	delay(5000);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  	delay(20000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  	delay(5000);
  digitalWrite(ledAmarelo, LOW);
  
  
}