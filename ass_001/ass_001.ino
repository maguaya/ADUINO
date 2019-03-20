

int REDLED=4;
int GREENLED=7;
int blinknumberREDLED=5;
int blinknumberGREENLED=6;

void setup() {
  Serial.begin(9600);
  Serial.print("This my first code");
  pinMode(REDLED,OUTPUT);
  pinMode(GREENLED,OUTPUT);
  // put your setup code here, to run once:

}


void loop() {
        
  // put your main code here, to run repeatedly:
  for(int j=1; j<=blinknumberREDLED; j=j+1){
    Serial.println(j);
    Serial.println("REDLED blinking");
  digitalWrite(REDLED,HIGH);
  delay(1000);
  digitalWrite(REDLED,LOW);
  delay(1000);
  }
  for(int k=1; k<=blinknumberGREENLED; k=k+1){
       Serial.println(k);
    Serial.println("GREENLED blinking");
  digitalWrite(GREENLED,HIGH);
  delay(1000);
  digitalWrite(GREENLED,LOW);
  delay(1000);
  }
}




 
  
  
 



