#include<LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
 
#define S1 7
#define S2 6
#define S3 5
#define S4 4
int vote1=0;
int vote2=0;
int vote3=0;
void setup()
{
pinMode(S1, INPUT);
pinMode(S2,INPUT);
pinMode(S3,INPUT);
pinMode(S4,INPUT);
pinMode(LED_BUILTIN, OUTPUT);

lcd.begin(16, 2);
lcd.print(" Electronic ");
lcd.setCursor(0,1);
lcd.print(" Voting Machine ");
delay(4000);
lcd.clear();
delay(1000);
lcd.print(" PBL Made by : ");
lcd.setCursor(0,1);
lcd.print(" Shlok 47 ,");
delay(2000);
lcd.setCursor(0,1);
lcd.print(" Ayush 58 ,");
delay(2000);
lcd.setCursor(0,1);
lcd.print(" Monish 62 .");
delay(2000);
lcd.clear();
delay(1000);
digitalWrite(S1, HIGH);
digitalWrite(S2, HIGH);
digitalWrite(S3, HIGH);
digitalWrite(S4, HIGH);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("%");
lcd.setCursor(6,0);
lcd.print("#");
lcd.setCursor(12,0);
lcd.print("$");
}
void loop()
{
  lcd.setCursor(1,0);
  lcd.print("%");
  lcd.setCursor(1,1);
  lcd.print("IT");
  lcd.setCursor(6,0);
  lcd.print("#");
  lcd.setCursor(6,1);
  lcd.print("CSE");
  lcd.setCursor(12,0);
  lcd.print("$");
  lcd.setCursor(12,1);
  lcd.print("ECE");
if(digitalRead(S1)==0)
{
digitalWrite(LED_BUILTIN, HIGH);

vote1++;
while(digitalRead(S1)==0);
digitalWrite(LED_BUILTIN, LOW); 
delay(500); 
}
if(digitalRead(S2)==0)
{
digitalWrite(LED_BUILTIN, HIGH);
vote2++;
while(digitalRead(S2)==0);
digitalWrite(LED_BUILTIN, LOW); 
delay(500);
}
if(digitalRead(S3)==0)
{
digitalWrite(LED_BUILTIN, HIGH);
vote3++;
while(digitalRead(S3)==0);
digitalWrite(LED_BUILTIN, LOW); 
delay(500);
}
if(digitalRead(S4)==0)
{
digitalWrite(LED_BUILTIN, HIGH);
digitalWrite(LED_BUILTIN, LOW); 
delay(500);
int vote=vote1+vote2+vote3;
if(vote)
{
if((vote1 > vote2 && vote1 > vote3))
{
lcd.clear();
lcd.print(" IT is Winner!! ");
delay(3000);
lcd.clear();
lcd.setCursor(1,0);
  lcd.print("IT");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(6,0);
  lcd.print("CSE");
  lcd.setCursor(6,1);
  lcd.print(vote2);
  lcd.setCursor(12,0);
  lcd.print("ECE");
  lcd.setCursor(12,1);
  lcd.print(vote3);
delay(2000);
lcd.clear();
//exit(0);
}
else if((vote2 > vote1 && vote2 > vote3))
{
lcd.clear();
lcd.print(" CS is Winner!! ");
delay(3000);
lcd.clear();
lcd.setCursor(1,0);
  lcd.print("IT");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(6,0);
  lcd.print("CSE");
  lcd.setCursor(6,1);
  lcd.print(vote2);
  lcd.setCursor(12,0);
  lcd.print("ECE");
  lcd.setCursor(12,1);
  lcd.print(vote3);
delay(2000);
lcd.clear();
//exit(0);
}
else if((vote3 > vote1 && vote3 > vote2))
{
lcd.clear();
lcd.print("ECE is Winner!! ");
delay(3000);
lcd.clear();
lcd.setCursor(1,0);
  lcd.print("IT");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(6,0);
  lcd.print("CSE");
  lcd.setCursor(6,1);
  lcd.print(vote2);
  lcd.setCursor(12,0);
  lcd.print("ECE");
  lcd.setCursor(12,1);
  lcd.print(vote3);
delay(2000);
lcd.clear();
//exit(0);

}
else
{
lcd.clear();
lcd.print(" Tie Up Or ");
lcd.setCursor(0,1);
lcd.print(" No Result ");
delay(3000);
lcd.clear();
lcd.setCursor(1,0);
  lcd.print("IT");
  lcd.setCursor(1,1);
  lcd.print(vote1);
  lcd.setCursor(6,0);
  lcd.print("CSE");
  lcd.setCursor(6,1);
  lcd.print(vote2);
  lcd.setCursor(12,0);
  lcd.print("ECE");
  lcd.setCursor(12,1);
  lcd.print(vote3);
  delay(2000);
//exit(0);
}
 
}
else
{
lcd.clear();
lcd.print("No Voting done!");
delay(3000);
lcd.clear();
//exit(0);
}
vote1=0;vote2=0;vote3=0,vote=0;
lcd.clear();
}
}
