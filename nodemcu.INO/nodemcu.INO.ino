int i = 5;
int myDelay = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (i > 0) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(myDelay);
    digitalWrite(LED_BUILTIN, HIGH);
    i --;
  }
  delay(1000);
  i = 5;
}
