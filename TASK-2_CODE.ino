#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int a=0;
int count=0;
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);
void setup()
{
  lcd.init();          // Initiate the LCD module
  lcd.backlight(); 
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(8)==LOW && a==0 ){
    lcd.setCursor(0,0);    
    count++;
    lcd.print("count");
    lcd.setCursor(0,1);
    lcd.print(count);
    a=1;
    Serial.println(count);
    
  }
  if(digitalRead(8)==HIGH){
    a=0;
  }
  delay(100);
}

