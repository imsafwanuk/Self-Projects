#ifndef BINTOHEX_H
#define BINTOHEX_H
#include <deque>

class binToHex
{
public:
    //the constructor takes a string of binary number of the user and modifies the number by adding 0's,
    //for easy conversion. Then sets the converted result into variable hex.
    binToHex(std::string);

    //takes in a deque of char of '0' and '1' and converts them into the final hexadecimal result,
    //stored in variable hex
    void convertToHex(std::deque<char> bin);

private:
    //will contain user's binary number
    std::deque<char> binary;
    //will contain the converted heximal number
    std::string hex;

};

#endif // BINTOHEX_H
