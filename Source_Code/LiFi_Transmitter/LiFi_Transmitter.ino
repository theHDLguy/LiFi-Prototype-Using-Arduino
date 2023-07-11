#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

// for keypad
const byte ROWS = 4;
const byte COLS = 4;

// representation of keypad
char hexaKeys[ROWS][COLS] = {  // keys stored in hexaKeys 2D arrat
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {11, 12, A0, A1}; // pins connected to rows of keypad
byte colPins[COLS] = {A2, A3, A4, A5}; // pins connected to cols of keypad

SoftwareSerial GSerial(2,3); 
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
char keycount = 0;
char code[5];

void setup(){
  delay(1000);
  Serial.begin(9600);
  Serial.println("Enter text");

  GSerial.begin(400);
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Transmitter LiFi");
  lcd.setCursor(0, 1);
  lcd.print("Number and Text");
  delay(3000);
  lcd.clear();

  GSerial.print('&');
}

void loop(){    
  char customKey = customKeypad.getKey();

  if(customKey && (customKey != '=')){      
    if (customKey == '#'){
      GSerial.print('^');
      lcd.setCursor(0, 1);
      lcd.print("                ");
      lcd.setCursor(0, 1);
    }

    else if (customKey == '*'){
      GSerial.print('&');
      lcd.clear();
    } 

    else{
      Serial.print(customKey);
      GSerial.print(customKey);
      lcd.print(customKey);
    }    
  }  
}