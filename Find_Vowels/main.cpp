#include <iostream>
#include <string>
#include <deque>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>      // std::pair

using namespace std;


int main()
{
    string input;
    getline(cin,input);
    //string from which vowels will be matched
    string vow = "aeiou";

    //initialising all counters to 0
    vector<pair<string,int> > arr;
    arr.push_back(make_pair("a",0));
    arr.push_back(make_pair("e",0));
    arr.push_back(make_pair("i",0));
    arr.push_back(make_pair("o",0));
    arr.push_back(make_pair("u",0));

    //incrementing counters that correspond to their relative vowels
    for(int j=0;j<input.size();j++)
    {
        if(vow.find(input[j])!=-1)
        {
           int w = vow.find(input[j]);
           arr[w].second++;
        }
    }

    //rearranging with preference to counts and then alphabetical order
    for(int j=0;j<arr.size()-1;j++)
    {
        int max = arr[j].second, max_in=j;
        for(int k=j+1;k<arr.size();k++)
        {
            //check if counter is bigger for any vowel
            if(arr[k].second > max)
            {
                max = arr[k].second;
                max_in = k;
              //  maxstr = arr[k].first
            }
            //check if counter is equal
            else if(arr[k].second == max)
            {
                //check if vowel is in alphabetical order already
                if(arr[k].first < arr[max_in].first)
                {
                    max = arr[k].second;
                    max_in = k;
                }
            }
        }
        iter_swap(arr.begin()+j,arr.begin()+max_in);
    }

    for(int j=0;j<arr.size();j++)
    {
        cout << arr[j].first<< ":" <<  arr[j].second;
        if(j!=arr.size()-1)
            cout<<" ";
        else
            cout<<""<<endl;
    }
}
