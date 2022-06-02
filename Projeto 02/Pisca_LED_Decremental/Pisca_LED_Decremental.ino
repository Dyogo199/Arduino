int LED=13;
int intervalo = 2000;


void setup() {
pinMode(LED, OUTPUT);
}
void loop(){
  if(intervalo == 0){
    intervalo = 2000; 
  }

  digitalWrite(LED, HIGH);
  delay (intervalo);
  digitalWrite(LED, LOW);
    delay (intervalo);
  intervalo = intervalo - 200;
}
