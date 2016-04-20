#ifndef HEXTODEC_H
#define HEXTODEC_H
#include <deque>

class hexToDec
{
public:
    //takes a string of hexadecimal number as input from the user and converts all letter to upper case.
    //then calls the conversion function to convert the input to decimal number.
    //the result is stored in variable decimal.
    hexToDec(std::string);

    //does the conversion from hexadecimal to decimal and sets the result in variable decimal.
   void convertToDec(std::string);

    std::string toUpperCase(std::string word);
private:
    unsigned long long decimal;
};

#endif // HEXTODEC_H
