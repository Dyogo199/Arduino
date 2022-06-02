int LED=13;
int LED2=12;
int intervalo = 2000;


void setup() {
pinMode(LED, OUTPUT);
}
void loop(){
  if(intervalo == 0){
    intervalo = 2000; 
  }

  digitalWrite(LED, HIGH);
  digitalWrite(LED2, LOW);
  delay (intervalo);
  digitalWrite(LED, LOW);
  digitalWrite(LED2, HIGH);
  delay (intervalo);
  intervalo = intervalo - 200;
}
