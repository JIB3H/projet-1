int LED[10] = {2,3,4,5,6,7,8,9,10,11}; //on crée un tableau avec les 10 pin

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 10; i++)
  {
    pinMode (LED[i],OUTPUT);
    digitalWrite (LED[i], LOW);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 10;i+=2)
  {
    digitalWrite(LED[i],HIGH);
}
}
