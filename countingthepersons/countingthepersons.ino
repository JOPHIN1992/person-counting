void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a,b,c=0,d=0,count=50;
  a=digitalRead(3);
  if(a==HIGH)
  {
    count=a+count;
    delay(1000);
    c++;
  }
  else
  {
    delay(1000);
  }
  b=digitalRead(4);
  if(b==HIGH)
  {
    count=count-b;
    delay(1000);
    d++;
  }
  else
  {
    delay(1000);
  }
Serial.println("total no of persons=");
Serial.println(count);
Serial.println("no of persons came inside=");
Serial.println(c);
Serial.println("no of persons went outside=");
Serial.println(d);
}
