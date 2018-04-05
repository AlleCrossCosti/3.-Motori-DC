const byte PIN_POTENZIOMETRO = A0;
const byte PIN_MOTORE       =5;

void setup () {
    // inizializza il motore come output
    pinMode (PIN_MOTORE, OUTPUT);
    pinMode (PIN_POTENZIOMETRO, INPUT);

 } 

 void loop ()  {
     int lettura = analogRead (PIN_POTENZIOMETRO);
     // Ridimensiona il valore lettura del range 0-1023
     // al range 0-255
     byte valore = map (lettura, 0, 1023, 0, 255);
     analogWrite (PIN_MOTORE, valore);
     delay (10);

 }      