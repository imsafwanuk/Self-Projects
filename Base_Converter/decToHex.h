#ifndef DECTOHEX_H
#define DECTOHEX_H


class decToHex
{
public:

    //the constructor takes in a decimal number and prints the hexadecimal number out
    //the hexadecimal number is also stored in the string, heximal
    decToHex(std::string);

    //this function does the conversion from decimal to heximal
    //and takes an decimal number as input and sets the heximal value in string heximal.
    void convertToHex(unsigned long long);

private:
        std::string heximal;
};

#endif // DECTOHEX_H
