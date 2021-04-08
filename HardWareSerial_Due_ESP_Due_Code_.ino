void setup() {
  // put your setup code here, to run once:
//Serial.begin(115200);
Serial1.begin(115200);
Serial1.print("hello");

}

void loop() {
  // put your main code here, to run repeatedly
  if (Serial1.available()){
    Serial1.println("done");
    Serial1.println("you Are Great");
    delay(2000);
    }
    
}
