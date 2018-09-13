
int led=9; //w9 is the pin number where the postive wire of the led is connected
void setup() {
 
pinMode(led,OUTPUT);
}

void loop() {
 
  digitalWrite(led,HIGH);
  delay(1000);
   digitalWrite(led,LOW);
   delay(1000);

}
