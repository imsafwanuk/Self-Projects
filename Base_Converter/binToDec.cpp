#include <iostream>
#include "decToBin.h"
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>  //atoi
#include <math.h>   //pow
#include "checkNumber.h"
#include "binToDec.h"
using namespace std;

binToDec::binToDec(string input)
{
    //conversion from string to int deque
    for(int i=0; i<input.size(); i++)
    {
        if(input[i] != ' ')
       binary.push_back(input[i]-'0');
    }
    decimal = 0;
    convertToDec(binary);
    cout<<decimal<<endl;
}

void binToDec::convertToDec(deque<int> num)
{
    //conversion from bin to dec
    int count=binary.size()-1;  //always 1 less than the size as LSB starts from 0 not 1.
    for(int i=0; i<binary.size(); i++)
    {
        if(binary[i]==1)
        {
            decimal+=pow(2,count);
        }
        count--;
    }
}
