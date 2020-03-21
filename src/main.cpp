#include "/usr/share/arduino/hardware/arduino/cores/arduino/Arduino.h"
// #include "../arduino/Arduino.h" // The install arduino library does not #include <stdint.h> for some reason
#include "/usr/share/arduino/hardware/arduino/cores/arduino/USBAPI.h" // Library where the class Serial_ is declared and has extern Serial_ Serial
//#include "LiquidCrystal/LiquidCrystal.h"

// #include "LiquidCrystal.h"

//Use GCC. Clang 7 does not work properly. <--- This is what I thought
//Kdevelop and somethimes CMake is inconsistant and therefore just add and delete some stuff and/or change settings back and forth and it will work or not work depending on its mood (yes I know its moody).

#include <inttypes.h>
#include <stdint.h>

int pin = 13;char incomingByte = ' ';

int dotLength = 200;

// LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void charToMorse(char input);

void setup() {
    pinMode(pin, OUTPUT);
    Serial.begin(9600);
//     lcd.begin(16, 4);
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
}

void loop() {
    Serial.println("Hello World");
    while(Serial.available() == 0) {}
    incomingByte = Serial.read();
    Serial.println(incomingByte);
    charToMorse(incomingByte);
//     lcd.print("Hello World\n");
}

void dot() {
    digitalWrite(pin, HIGH);
    delay(dotLength);
    digitalWrite(pin, LOW);
}

void dash() {
    digitalWrite(pin, HIGH);
    delay(3 * dotLength);
    digitalWrite(pin, LOW);
}


/*
 * seperate this function into multiple parts.
 * Part 1:  change from switch case statement to hashmap
 *          have each char have an array value
 *          make so that when you querry with the char the proper array is returend
 *          such as 'A' returns [0, 1]
 * Part 2:  have a morsePrintChar function that loops through teh array retrieved with the inputed char and has a delay(dotLength) until it reaches the last element
 *          such as
 *              for(i=0; i=arrayLength; i++) {
                    (array[i])? dash():dot();
                    if(i!=arrayLength-1) delay(dotLength);
                }
 *
 * Part 3:  do the samething but for words.
 * Part 4:  do the samething but for sentences.
 * Part 5:  take care of all the punctuation
 * Part 6:  take care of paragraphs
 * 
 * Part 7:  have a gui to interact with the serial monitor better and send and recieve data in a user friendly manner.
 */

void charToMorse(char input) {
    switch (input) {
        case 'A':
        case 'a':   dot();  delay(dotLength);
                    dash();
                    break;
        case 'B':
        case 'b':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case 'C':
        case 'c':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case 'D':
        case 'd':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case 'E':
        case 'e':   dot();
                    break;
        case 'F':
        case 'f':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case 'G':
        case 'g':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case 'H':
        case 'h':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case 'I':
        case 'i':   dot();  delay(dotLength);
                    dot();
                    break;
        case 'J':
        case 'j':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case 'K':
        case 'k':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case 'L':
        case 'l':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case 'M':
        case 'm':   dash(); delay(dotLength);
                    dash();
                    break;
        case 'N':
        case 'n':   dash(); delay(dotLength);
                    dot();
                    break;
        case 'O':
        case 'o':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case 'P':
        case 'p':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case 'Q':
        case 'q':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case 'R':
        case 'r':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case 'S':
        case 's':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case 'T':
        case 't':   dash();
                    break;
        case 'U':
        case 'u':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case 'V':
        case 'v':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case 'W':
        case 'w':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case 'X':
        case 'x':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case 'Y':
        case 'y':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case 'Z':
        case 'z':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        
        case '1':   dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case '2':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case '3':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        case '4':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dash();
                    break;
        case '5':   dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case '6':   dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  
                    break;
        case '7':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case '8':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();  delay(dotLength);
                    dot();
                    break;
        case '9':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dot();
                    break;
        case '0':   dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash(); delay(dotLength);
                    dash();
                    break;
        
    }
}

// When using GNU screen as serial monitor
// screen /dev/ttyACM0 9600
// Need to press CTRL a \ to exit GNU screen properly or the you won't be able to upload to the board properly
// In order to upload again try runing arduino in sudo  (tested with distro package, uncertain about flatpak version)
