int LED = 11;
int incremental = 0;
int decremental = 256;



void setup() {
pinMode(LED, OUTPUT);
Serial.begin(9600);
}
void loop(){
  if(incremental < 255 ){
       analogWrite(LED, incremental);
        delay (50);
        incremental = incremental +1;
        if(incremental == 255 ){
           decremental = incremental;
        }
   }

   if(decremental <= 255 ){
       analogWrite(LED, decremental);
       delay (50);
       decremental = decremental -1;
       if(decremental == 0 ){
        incremental  = decremental;
         decremental = 256;
        }
   }
   Serial.println(incremental);
      Serial.println(decremental);
}
