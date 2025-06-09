const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;

// Display 7 segmentos 1
const int A = 8; 
const int B = 12;
const int C = 11;
const int D = 10;
const int E = 9;
const int F = 7;
const int G = 6; 

//Display 7 segmentos 2
const int A_2 = 4; 
const int B_2 = 5;
const int C_2 = 13;
const int D_2 = 3;
const int E_2 = 2;
const int F_2 = 1;
const int G_2 = 0; 

void setup(){
Serial.begin(9600);
analogReference(INTERNAL); 

pinMode(A, OUTPUT); 
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);
pinMode(E, OUTPUT);
pinMode(F, OUTPUT);
pinMode(G, OUTPUT); 

pinMode(A_2, OUTPUT); 
pinMode(B_2, OUTPUT);
pinMode(C_2, OUTPUT);
pinMode(D_2, OUTPUT);
pinMode(E_2, OUTPUT);
pinMode(F_2, OUTPUT);
pinMode(G_2, OUTPUT); 
}

void loop(){

ADClido = analogRead(LM35);
temperatura = ADClido * 0.1075268817204301;
Serial.print("Temperatura = ");
Serial.print(temperatura);
Serial.println(" *C");
delay(1000);

digitalWrite(A, HIGH); //acende os leds que representam o número 0
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, LOW); //acende os leds que representam o número 1
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 2
digitalWrite(B, HIGH);
digitalWrite(C, LOW);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 3
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, LOW); //acende os leds que representam o número 4
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 5
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, LOW); //acende os leds que representam o número 6
digitalWrite(B, LOW);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 7
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 8
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, HIGH);
digitalWrite(E, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(500); //aguarda 1 segundo para mostrar próximo número

digitalWrite(A, HIGH); //acende os leds que representam o número 9
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
delay(500); 

digitalWrite(A, HIGH); //acende os leds que representam o número 10
digitalWrite(B, HIGH);
digitalWrite(C, HIGH);
digitalWrite(D, LOW);
digitalWrite(E, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
digitalWrite(A_2, HIGH); 
digitalWrite(B_2, HIGH);
digitalWrite(C_2, HIGH);
digitalWrite(D_2, HIGH);
digitalWrite(E_2, HIGH);
digitalWrite(F_2, HIGH);
digitalWrite(G_2, LOW);
delay(500); 
} 