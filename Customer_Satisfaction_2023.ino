
int RED=9;
int GREEN=10;
int YELLOW=11;

int buttonRed=3;
int buttonGreen=4;
int buttonYellow=5;
int readv1;
int readv2;
int readv3;
//String id;
void setColor(int R ,int G,int Y){
  analogWrite(RED,R);
  analogWrite(GREEN,G);
  analogWrite(YELLOW,Y);}
void setup() {
  // put your setup code here, to run once:
pinMode(buttonRed,INPUT_PULLUP);
pinMode(buttonGreen,INPUT_PULLUP);
pinMode(buttonYellow,INPUT_PULLUP);
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(YELLOW,OUTPUT);

//analogWrite(RED,255);
//analogWrite(GREEN,255);
//analogWrite(BLUE,255);

Serial.begin(9600);
}

void loop() {
  readv1=digitalRead(buttonRed);
  readv2=digitalRead(buttonGreen);
  readv3=digitalRead(buttonYellow);
 
  /*Serial.println(readv1);
  Serial.println(readv2);
  Serial.println(readv3);*/
  String name1;
  String branch;

   
  if (Serial.available() > 0) {
      name1=Serial.readString();
     Serial.print("YOUR NAME IS  ");
      Serial.print(name1);
   
       delay(4000);
      branch=Serial.readString();
     Serial.print("YOUR branch IS  ");
      Serial.print(branch);
      }
    
    
  if (readv1==0){
  delay(500);

 setColor(255,0,0);
   delay(500);
   Serial.println("not_Satisfied");
  
  
   
  }
  if(readv1==1 )
  
   setColor(0,0,0);
  if (readv2==0 ){
   delay(500);
  
   setColor(0,255,0);
   delay(500);
   Serial.println("Satisfied");
  
  }
  if(readv2==1 )
   
   setColor(0,0,0);
  if (readv3==0 ){
   delay(500);
  
   setColor(255,255,0);
   delay(500);
    Serial.println("Neutral");
    
  
  }
  if(readv3==1 )
  
    setColor(0,0,0);
}
