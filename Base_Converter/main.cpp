#include <iostream>
#include "decToBin.h"
#include <deque>
#include <string>
#include <sstream>
#include <istream>
#include <cstdlib>  //atoi
#include <math.h>   //pow
#include "checkNumber.h"
#include "binToDec.h"
#include "decToHex.h"
#include "hexToDec.h"
#include "binToHex.h"
#include "hexToBin.h"
using namespace std;

int runProgram();

int main()
{
    string exit = "";
    //run while user doesn't press q or Q
    while(exit != "q" && exit!="Q")
    {
       runProgram();
       cout<<"Press q to quit or c to convert again"<<endl;
       cin>> exit;
    }
    cout<<"closing program..."<<endl;
}

int runProgram()
{
    cout<<"Please write the number that suits your conversion."<<endl;
    cout<<"1-Decimal to Binary"<<endl;
    cout<<"2-Binary to Decimal"<<endl;
    cout<<"3-Decimal to Hexadecimal"<<endl;
    cout<<"4-Hexadecimal to Decimal "<<endl;
    cout<<"5-Binary to Hexadecimal"<<endl;
    cout<<"6-Hexadecimal to Binary "<<endl;

    string input;      //this takes base number
    int number;         //this takes option number from above menu
    cin>>number;
    checkNumber checkNumber;
    switch(number)
    {
    case 1:
        {
            cout<<"Write your decimal number:";
            cin>>input;
            if(checkNumber.dec(input))
            {
                 cout<<"\n Binary:";
                 decToBin *convert = new decToBin(input); //max 33554431
                 delete convert;
              }
              else
              {
                cout<<"\n Invalid Entry:"<<input<<endl;
            }

            break;
        }
    case 2:
       {
            cout<<"Write your binary number:";
            cin>>input;
            if(checkNumber.bin(input))
            {
                 cout<<"\n Decimal:";
                 binToDec *convert = new binToDec(input);
                 delete convert;
              }
              else
              {
                cout<<"\n Invalid Entry:"<<input<<endl;
            }
            break;
       }
     case 3:
        {
            cout<<"Write your decimal number:"; istringstream s;
            cin>>input;
            if(checkNumber.dec(input))
            {
                   cout<<"\n Hexadecimal:";
                   decToHex *convert = new decToHex(input);
                   delete convert;
                }
                else
                {
                   cout<<"\n Invalid Entry:"<<input<<endl;
            }
            break;
        }
    case 4:
        {
            cout<<"Write your hexadecimal number:";
            cin>>input;
            if(checkNumber.hex(input))
            {
                   cout<<"\n Hexadecimal:";
                   hexToDec *convert = new hexToDec(input);
                   delete convert;
                }
                else
                {
                   cout<<"\n Invalid Entry:"<<input<<endl;
            }
            break;
        }
    case 5:
        {
            cout<<"Write your Binary number:";
            cin>>input;
            if(checkNumber.bin(input))
            {
                 cout<<"\n Binary:";
                 binToHex *convert = new binToHex(input);
                 delete convert;
              }
              else
              {
                cout<<"\n Invalid Entry:"<<input<<endl;
            }

            break;
        }
    case 6:
        {
            cout<<"Write your Hexadecimal number:";
            cin>>input;
            if(checkNumber.hex(input))
            {
                 cout<<"\n Hexadecimal:";
                 hexToBin *convert = new hexToBin(input);
                 delete convert;
              }
              else
              {
                cout<<"\n Invalid Entry:"<<input<<endl;
            }
            break;
        }
    case 'q':
        {
            cout<<"Thank you!"<<endl;
            return -1;
            break;
        }
    default:
        {
            cout<<"I think your option doesn't exist :("<<endl;
            break;
        }
    }
}
