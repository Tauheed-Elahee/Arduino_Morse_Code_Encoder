#ifndef MORSE_CODE_H
#define MORSE_CODE_H

#include <unordered_map>
#include <vector>
#include <string>
// #include "Arduino.h"

// Classes might need an hpp file instead.

using namespace std;

class Morse_Code {
public:
    Morse_Code(int dotlenght = 1);
    void charToMorse(char input);

private:
    int dotlenght;
    void dot(void);
    void dash(void);
    static unordered_map<char, vector<int>> morse_code;
    static unordered_map<char, vector<int>> initialize_morse_code(void);
};

#endif//MORSE_CODE_H
