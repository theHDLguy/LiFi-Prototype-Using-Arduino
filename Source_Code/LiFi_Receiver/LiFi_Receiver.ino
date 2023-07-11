#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>

/*LCD used = 16x2 --> 2 rows of 16 rectangles each
  Each rectangle = 5x8 --> 8 rows of 5 squares

  Most I2C LCDs ship with the default address ‘0x27’, but it can be different depending on the batch/manufacturer.
  Find your LCD address by running "Arduino I2C Scanner" sketch found as an example */

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);  // 0x27 is the address of LCD & (16, 2) is for (col, rows)
SoftwareSerial GSerial(11, 12);  // "GSerial" - obj name; "SoftwareSerial" - obj type, (software implementation of serial com protocol); (11, 12) - (RX, TX) pins

char rec = 0;

// run once
void setup(){
  Serial.begin(9600);  // initializes the serial com @ 9600 bits/s baud rate
  GSerial.begin(400);  // initializes the software serial com using the GSerial object @ 400 bits/s baud rate

  lcd.begin(16, 2);  // initializes the LCD display using the lcd object

  lcd.setCursor(0, 0);  // sets cursor position @ (0,0) --> (col, row)
  lcd.print("Receiver LiFi");

  lcd.setCursor(0, 1);
  lcd.print(" Number and Text ");

  delay(3000);  // 3s delay
  lcd.clear();
}

// run forever
void loop(){
  if(GSerial.available() != 0){  // if there's data available to be read
    rec = GSerial.read();  // character from GSerial obj is read & stored in 'rec'
    
    // character for clearing 2nd row
    if(rec == '^'){
      lcd.setCursor(0, 1);
      lcd.print("                ");
      lcd.setCursor(0, 1);
    }

    // character for clearing screen
    else if(rec == '&'){
      lcd.clear();
    }

    // printing character on both serial monitor & LCD screen
    else{
      Serial.print(rec);
      lcd.print(rec);
    }
  }
}