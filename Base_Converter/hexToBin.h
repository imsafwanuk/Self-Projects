#ifndef HEXTOBIN_H
#define HEXTOBIN_H


class hexToBin
{
public:

    //the constructor takes a string of hexadecimal number from user and converts it into binary number.
    //the result is stored in the variable binary.
    hexToBin(std::string);

    //does the conversion and stores the result it in binary.
    //this is done by mapping.
    void convertToBin(std::string);

private:
    //variable that stores the binary result after conversion.
    std::string binary;
};

#endif // HEXTOBIN_H
