#include <iostream>
#include "decToBin.h"
#include <deque>
#include <sstream>
#include <cstdlib>  //atoi
using namespace std;

decToBin::decToBin(string input)
{
     int dec;
    //put error checking in future please!
     dec = atoi(input.c_str());
     convertToBin(dec);
     cout<<binary<<endl;
}

void decToBin::convertToBin(int num)
{
    deque <int> bin;
    int b;
    while(num!=0)
    {
        b = num%2;
        bin.push_front(b);
        num /= 2;
    }

    int until = 16-bin.size();
    for(int i=0;i<until;i++)
    {
        bin.push_front(0);
    }
    ostringstream c;
    for(int i=0;i<bin.size();i++)
    {
        if(i%8==2)
        {
            binary+=" ";
        }
        c<<bin[i];
        binary+= c.str();
        c.str("");
        c.clear();


    }
}
