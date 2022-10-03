// C++ code
//
int wait_time_ms = 0;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  wait_time_ms = 200;
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(wait_time_ms); // Wait for wait_time_ms millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(wait_time_ms); // Wait for wait_time_ms millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(wait_time_ms); // Wait for wait_time_ms millisecond(s)
}