void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Hello World");//在串口监视器上显示Hello World
delay(1000);//等待1秒
}
