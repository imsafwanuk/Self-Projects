#include <iostream>
#include <deque>
#include <algorithm>
#include <sstream>
#include "checkNumber.h"
using namespace std;

bool checkNumber::dec(string num)
{
    //if any value is a non digit then return false
    for(int i=0;i<num.size();i++)
    {
        if(!isdigit(num[i]))
            return false;
    }
    return true;
}

bool checkNumber::bin(string num)
{
    //if any value is a non digit then return false
    for(int i=0;i<num.size();i++)
    {
      if(num[i]!='0' && num[i]!='1' && num[i] != ' ')
      {
          return false;
      }
    }
    return true;
}

bool checkNumber::hex(string hex)
{
    //if any value is a non digit then return false
    for(int i=0;i<hex.size();i++)
    {

        //if not a number, then check for valid letter
        if(!isdigit(hex[i]))
        {
            if(!(hex[i]>='A' && hex[i]<='F')&&!(hex[i]>='a' && hex[i]<='f'))
                return false;
        }
    }
    return true;
}


