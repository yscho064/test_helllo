//GPIO Pin mapping 부분, nodemcu와 아두이노간 pin이 달라서 초기 설정 필요
#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15

void setup() {
  pinMode(D0, OUTPUT); // LED연결된 D0핀을 출력핀으로 지정
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(D0, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
