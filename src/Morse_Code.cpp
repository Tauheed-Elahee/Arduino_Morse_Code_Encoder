
#include <unordered_map>
#include <vector>
#include "Morse_Code.h"

Morse_Code::Morse_Code(int dotlenght)
{
    this->dotlenght = dotlenght;
}

void Morse_Code::charToMorse(char input)
{
    //
}

void Morse_Code::dot()
{
}

void Morse_Code::dash()
{
}

unordered_map<char, vector<int> > Morse_Code::initialize_morse_code()
{
    unordered_map<char, vector<int>> morse_code;
    
    morse_code['A'] = {0, 1};
    morse_code['a'] = {0, 1};
    morse_code['B'] = {1, 0, 0, 0};
    morse_code['b'] = {1, 0, 0, 0};
    morse_code['C'] = {1, 0, 1, 0};
    morse_code['c'] = {1, 0, 1, 0};
    morse_code['D'] = {1, 0, 0};
    morse_code['d'] = {1, 0, 0};
    morse_code['E'] = {0};
    morse_code['e'] = {0};
    morse_code['F'] = {0, 0, 1, 0};
    morse_code['f'] = {0, 0, 1, 0};
    morse_code['G'] = {1, 1, 0};
    morse_code['g'] = {1, 1, 0};
    morse_code['H'] = {0, 0, 0, 0};
    morse_code['h'] = {0, 0, 0, 0};
    morse_code['I'] = {0, 0};
    morse_code['i'] = {0, 0};
    morse_code['J'] = {0, 1, 1, 1};
    morse_code['j'] = {0, 1, 1, 1};
    morse_code['K'] = {1, 0, 1};
    morse_code['k'] = {1, 0, 1};
    morse_code['L'] = {0, 1, 0, 0};
    morse_code['l'] = {0, 1, 0, 0};
    morse_code['M'] = {1, 1};
    morse_code['m'] = {1, 1};
    morse_code['N'] = {1, 0};
    morse_code['n'] = {1, 0};
    morse_code['O'] = {1, 1, 1};
    morse_code['o'] = {1, 1, 1};
    morse_code['P'] = {0, 1, 1, 0};
    morse_code['p'] = {0, 1, 1, 0};
    morse_code['Q'] = {1, 1, 0, 1};
    morse_code['q'] = {1, 1, 0, 1};
    morse_code['R'] = {0, 1, 0};
    morse_code['r'] = {0, 1, 0};
    morse_code['S'] = {0, 0, 0};
    morse_code['s'] = {0, 0, 0};
    morse_code['T'] = {1};
    morse_code['t'] = {1};
    morse_code['U'] = {0, 0, 1};
    morse_code['u'] = {0, 0, 1};
    morse_code['V'] = {0, 0, 0, 1};
    morse_code['v'] = {0, 0, 0, 1};
    morse_code['W'] = {0, 1, 1};
    morse_code['w'] = {0, 1, 1};
    morse_code['X'] = {1, 0, 0, 1};
    morse_code['x'] = {1, 0, 0, 1};
    morse_code['Y'] = {1, 0, 1, 1};
    morse_code['y'] = {1, 0, 1, 1};
    morse_code['Z'] = {1, 1, 0, 0};
    morse_code['z'] = {1, 1, 0, 0};
    morse_code['1'] = {0, 1, 1, 1, 1};
    morse_code['2'] = {0, 0, 1, 1, 1};
    morse_code['3'] = {0, 0, 0, 1, 1};
    morse_code['4'] = {0, 0, 0, 0, 1};
    morse_code['5'] = {0, 0, 0, 0, 0};
    morse_code['6'] = {1, 0, 0, 0, 0};
    morse_code['7'] = {1, 1, 0, 0, 0};
    morse_code['8'] = {1, 1, 1, 0, 0};
    morse_code['9'] = {1, 1, 1, 1, 0};
    
    return morse_code;
}


/*
static unordered_map<char, int> morse_code = {
    {'A', 1}
};
*/
