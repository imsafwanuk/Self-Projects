#ifndef DECTOBIN_H
#define DECTOBIN_H
#include <deque>
//this class will convert a given deciaml integer into an 8 bit binary number.

class decToBin
{
public:
    //the constructor takes in a decimal number can converts it into binary,
    // stores the result in varibale binary and displays the result.
    decToBin(std::string);

    //this function does the conversion from decimal to binary
    //and takes an int decimal number as input and set the binary value in variable binary.
    void convertToBin(int);

private:
    std::string binary;

};

#endif // DECTOBIN_H
