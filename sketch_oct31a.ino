 int ledvermelho=11;
 int ledamarelo=10;
 int ledverde=9;
 int ledazul=6;

void setup() {
 Serial.begin(9600);
 
 pinMode (ledvermelho, OUTPUT);
 pinMode (ledamarelo, OUTPUT);
 pinMode (ledverde, OUTPUT);
 pinMode (ledazul, OUTPUT);
 
}
void loop() {
 int tempo=analogRead(A0);
 Serial.println(tempo);
 delay(200);

 digitalWrite (ledvermelho, HIGH);
 delay (tempo);
 digitalWrite (ledvermelho,LOW);
 delay (tempo);
 digitalWrite (ledamarelo, HIGH);
 delay (tempo);
 digitalWrite (ledamarelo,LOW);
 delay (tempo);
 digitalWrite (ledverde, HIGH);
 delay (tempo);
 digitalWrite (ledverde,LOW);
 delay (tempo);
 digitalWrite (ledazul, HIGH);
 delay (tempo);
 digitalWrite (ledazul,LOW);
 delay (tempo);
 
}
