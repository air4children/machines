void setup() {
  pinMode( 13 , OUTPUT);
}

void loop() {
  for (int count=0 ; count<2 ; count++) {
    tone( 13,392,500);
    delay(500);
  }
  tone( 13,440,500);
  delay(500);
  tone( 13,392,500);
  delay(500);
  tone( 13,523,500);
  delay(500);
  tone( 13,493,1000);
  delay(1000);
  for (int count=0 ; count<13 ; count++) {
    tone( 13,392,500);
    delay(500);
  }
  tone( 13,440,500);
  delay(500);
  tone( 13,392,500);
  delay(500);
  tone( 13,587,500);
  delay(500);
  tone( 13,523,500);
  delay(500);
  while(true);

}