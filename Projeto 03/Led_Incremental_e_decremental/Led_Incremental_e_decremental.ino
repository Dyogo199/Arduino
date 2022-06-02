int LED = 11;
int incremental = 0;
int decremental = 255;
int aux = 0;


void setup() {
pinMode(LED, OUTPUT);
Serial.begin(9600);
}
void loop(){
  if(incremental < 255 && aux == 0){
       analogWrite(LED, incremental);
        delay (15);
        incremental = incremental +1;
        if(incremental == 255 ){
          aux = 1;
        }
   }

   if(incremental <= 255 && aux == 1 ){
       analogWrite(LED, incremental);
       delay (15);
       incremental = incremental -1;
       if(incremental == 0 ){
          aux = 0;
        }
   }
   Serial.println(incremental);
}
