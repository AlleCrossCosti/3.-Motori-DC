const byte PIN_PULSANTE = 2;
const byte PIN_MOTORE = 5;

void setup () {
    pinMode (PIN_PULSANTE, INPUT);
    pinMode (PIN_MOTORE, OUTPUT);

 } 

 void loop () {
     byte statoBottone = digitalRead (PIN_PULSANTE)
     if (statoBottone == HIGH)  {
         digitalWrite (PIN_MOTORE, HIGH);

 } 
 else  {
     digitalWrite (PIN_MOTORE, LOW);
 } 
 delay (10);
 }             