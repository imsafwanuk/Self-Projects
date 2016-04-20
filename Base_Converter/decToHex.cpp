#include <iostream>
#include "decToHex.h"
#include <deque>
#include <sstream>


using namespace std;

decToHex::decToHex(string decimal)
{
    unsigned long long dec;
    stringstream strstream;
    strstream << decimal;
    strstream >> dec;
    convertToHex(dec);
    cout<<heximal<<endl;
}

void decToHex::convertToHex(unsigned long long num)
{
    deque<string> binary;
    ostringstream letter;
    string hex;
    int count=0;
    unsigned long long n;

    while(num!=0)
    {
        n = num%16;
        //when n>9
        switch(n)
        {
        case 10:
           {
                hex = "A";
                break;
           }
        case 11:
            {
                hex = "B";
                break;
            }
        case 12:
            {
                hex = "C";
                break;
            }
        case 13:
            {
                hex = "D";
                break;
            }
        case 14:
            {
                hex = "E";
                break;
            }
        case 15:
            {
                hex = "F";
                break;
            }
        default:
            {
                letter << n;
                hex = letter.str();
                letter.str("");
                letter.clear();
                break;
            }
        }
        //for convinience adding a space after 8bit
        if(count==8)
            binary.push_front(" ");

        binary.push_front(hex);
        num /= 16;

    }

    //inserting in string, heximal
    for(int i=0;i<binary.size();i++)
    {
        if(i==8)
        {
            heximal+=" ";
        }
        heximal+=binary[i];
    }
}
