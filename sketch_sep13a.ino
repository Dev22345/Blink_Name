void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
//  ***D***
   Serial.println("D");
   dash();
   dot();
   dot();
  
 // ***E***
  Serial.println("E");
  dot();
  
//  ***V***
  Serial.println("V");
  dot();
  dot();
  dot();
  dash();
  
 // ***A***
  Serial.println("A");
  dot();
  dash();
  
 // ***N***
  Serial.println("N");
  dash();
  dot();
  
  //***S***
  Serial.println("S");
  dot();
  dot();
  dot();
  
//  ***H***
  Serial.println("H");
  dot();
  dot();
  dot();
  dot();
  
 // ***U***
  Serial.println("U");
  dot();
  dot();
  dash();
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(20000);
}
