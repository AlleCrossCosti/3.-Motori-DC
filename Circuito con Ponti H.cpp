const byte MOTORE_SX = 9;
const byte MOTORE_DX = 10;
const byte PULSANTE  = 2;

void setup () { 
    // inizializza il pulsante come input
    pinMode (PULSANTE, INPUT);
    // e il motore come output
    pinMode (MOTORE_SX, OUTPUT);
    pinMode (MOTORE_DX; OUTPUT);
} 

void loop () {
    // premendo il pulsante si inverte il senso di rotazione
    byte lettura = digitalRead (PULSANTE);

    digitalWrite (MOTORE_SX, lettura);
    digitalWrite (MOTORE_DX, !lettura);

    delay (50);

 }    