#include <iostream>
#include "decToBin.h"
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>  //atoi
#include <map>
#include "hexToBin.h"
using namespace std;

//
hexToBin::hexToBin(string input)
{
    convertToBin(input);
    cout<<binary<<endl;
}

void hexToBin::convertToBin(string input)
{
    map<char,string> hexMap;
    hexMap['0'] = "0000";
    hexMap['1'] = "0001";
    hexMap['2'] = "0010";
    hexMap['3'] = "0011";
    hexMap['4'] = "0100";
    hexMap['5'] = "0101";
    hexMap['6'] = "0110";
    hexMap['7'] = "0111";
    hexMap['8'] = "1000";
    hexMap['9'] = "1001";
    hexMap['A'] = "1010";
    hexMap['B'] = "1011";
    hexMap['C'] = "1100";
    hexMap['D'] = "1101";
    hexMap['E'] = "1110";
    hexMap['F'] = "1111";

    map<char,string>::iterator it;
    //padding for easy reading
    for(int i = 0;i<input.size();i++)
    {
        it = hexMap.find(input[i]);
        binary+= it->second;
        binary+=" ";
    }

}
