#ifndef CHECKNUMBER_H
#define CHECKNUMBER_H

//this class checks if the input number is valid or not
//it checks for any base numbers
class checkNumber
{
public:

    //this function takes the user input and checks whether it is a valid decimal number
    //returns true if valid, else false.
    bool dec(std::string);

    //this function takes the user input and checks whether it is a valid binary number
    //returns true if valid, else false.
    bool bin(std::string);

    //this function takes the user input and checks whether it is a valid hexadecimal number
    //returns true if valid, else false.
    bool hex(std::string);


};

#endif // CHECKNUMBER_H
