#include <iostream>
#include "decToBin.h"
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>  //atoi
#include <math.h>
#include "hexToDec.h"

using namespace std;

hexToDec::hexToDec(string input)
{
    input= toUpperCase(input);
    decimal = 0;
    convertToDec(input);
    cout<<decimal<<endl;
}

void hexToDec::convertToDec(string hex)
{
    int multiply;
    //conversion from hexa to dec
    int count=hex.size()-1;  //always 1 less than the size as LSB starts from 0 not 1.
    for(int i=0; i<hex.size(); i++)
    {
        if(hex[i]!=0)
        {
            switch(hex[i])
            {
            case 65:
                {
                    multiply = 10;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            case 66:
                {
                    multiply = 11;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            case 67:
                {
                    multiply = 12;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            case 68:
                {
                    multiply = 13;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            case 69:
                {
                    multiply = 14;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            case 70:
                {
                    multiply = 15;
                    decimal+= pow(16,count)*multiply;
                    break;
                }
            default:
                {
                    multiply = hex[i]-'0';
                    decimal+= pow(16,count)*multiply;
                }
            }
        }
        count--;
    }
}

string hexToDec::toUpperCase(string word)
{
    string newWord="";
    for(int i=0;i<word.size();i++)
    {
        newWord+=char(toupper(word[i]));
    }
	return newWord;
}


