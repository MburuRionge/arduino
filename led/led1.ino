#define led 19

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int num;
  Serial.println("Enter a number: ");
  while (!Serial.available());
  num = Serial.parseInt();
  Serial.print("You entered: ");
  Serial.println(num);
  if(num==1){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(5000);
}


