#ifndef BINTODEC_H
#define BINTODEC_H
#include <deque>


class binToDec
{
public:
    //the constructor takes in a string input containing the binary value
    //then stores the value in variable binary, and calculates the decimal value
    binToDec(std::string);

    //this function does the conversion from binary to decimal
    //and takes the binary deque as input and stores the decimal value in variable decimal.
    void convertToDec(std::deque<int>);

private:
    //this will store the decimal value after conversion from int.
    int decimal;
    //this will store the binary number from the user
    std::deque <int> binary;
};

#endif // BINTODEC_H
