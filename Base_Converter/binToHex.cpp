#include <iostream>
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>  //atoi
#include <math.h>   //pow
#include "binToHex.h"
using namespace std;

binToHex::binToHex(string input)
{
    int zeros=-1;
    //removing any space, if any
    for(int i=0;i<input.size();i++)
    {
        if(input[i] != ' ')
            binary.push_back(input[i]);
    }
    //1st find how many 0's needed by [4-(binary.size()%4] then wrap around 4 so number is from 0-3
    zeros = (4-(binary.size()%4))%4;
    for(int i=0;i<zeros;i++)
    {
        binary.push_front('0');
    }
    convertToHex(binary);
    cout<<hex<<endl;

}

void binToHex::convertToHex(deque<char> bin)
{
    int count; int decimal=0; string deci; ostringstream letter;


    for(int i=0;i<bin.size();i++)
    {
        //stores the index of binary number. the count will always from 0-3 as it is convinient for this conversion
        count = (bin.size()-1-i)%4;

        if(bin[i]=='1')
          {
            //cout<<"bin:"<<bin[i];
            //cout<<" count:"<<count;
            decimal+= pow(2,count);
          //  cout<<" decimal:"<<decimal<<endl;
          }
        if(count == 0)
        {
            //convert deci to hex
            switch(decimal)
            {
            case 10:
                {
                    deci = "A";
                    break;
                }
            case 11:
                {
                    deci = "B";
                    break;
                }
            case 12:
                {
                    deci = "C";
                    break;
                }
            case 13:
                {
                    deci = "D";
                    break;
                }
            case 14:
                {
                    deci = "E";
                    break;
                }
            case 15:
                {
                    deci = "F";
                    break;
                }
            default:
                {
                    letter << decimal;
                    deci = letter.str();
                    letter.str("");
                    letter.clear();
                    break;
                }
            }
            decimal = 0;
            hex+=deci;
        }
    }
}
