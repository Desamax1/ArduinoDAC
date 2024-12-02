uint16_t deg = 0;
volatile uint8_t val = 0;

void setup()
{
  // Serial.begin(115200);
  // for(int i = 2; i <= 9; i++)
  // 	pinMode(i, OUTPUT);
  Serial.begin(115200);
  DDRC |= 0b11111111;
}

void loop()
{
  // val = ((sin(7 * deg * 3.14 / 180) + 1) / 2) * 230;
  // deg++;
  // deg %= 360 * 1/7;
  
  PORTC = val;
  // PORTC = val;
  
  // Serial.println(val);
  // Serial.print(" ");
  // Serial.println(analogRead(A0));
  // delay(10);

  // Serial.println(analogRead(A0));
  // delay(10);
}

void serialEvent() {
  val = Serial.readStringUntil("\n").toInt();
  Serial.println(val);
}