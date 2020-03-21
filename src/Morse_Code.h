#ifndef MORSE_CODE_H
#define MORSE_CODE_H

#include <map>
#include <string>
#include "Arduino.h"

// Classes might need an hpp file instead.

using namespace std;

class Morse_Code {
public:
    Morse_Code(int dotlenght = 1);
    void charToMorse(char input);

private:
    int dotlenght;
    static map<string, int> morse_code;
    void dot(void);
    void dash(void);
};

#endif//MORSE_CODE_H
