 /*  GHP #7 code

    Check Hash.h for all comments towards this code and its functions.

    Written by Nicole Maiello
        Hash.h is the header for this code.
    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
*/

#include <iostream>
#include <string>

using namespace std;

#include "Hash.h"

Hash::Hash()
{
    int i;
    for(i = 0; i < 23; i++)
        hashing[i] = "0";
}


void Hash::place(string w)
{
    eq(w);

    if(!empty())
        searching();
    hashing[store] = w;

}

void Hash::eq(string w)
{
    store = (w[0] + w[(w.length() - 1)]) % 23;
}

bool Hash::empty() const
{
    bool info = true;
    if (hashing[store] != "0") //the slot is NOT empty; true = empty, false = full
        info = false;
    return info;
}

void Hash::searching()
{
    while(!empty())
        if (store > 22)
            store = 0;
        else
            store++;
}

void Hash::display()
{
    for(int i = 0;i<23;i++)
    {
        cout<<hashing[i]<<" in position: "<<i<<endl;
    }
}

int Hash::ret_store()
{
    return store;
}

void Hash::search_string(string str)
{
    bool found = false;
    eq(str);
    int i = store;
    if(empty())
    {
        cout<<"Sorry."<<str<<" is not in the hashed sort."<<endl;
    }
    else if(hashing[store] == str)
        cout<<str<<" was found in position: "<<store<<endl;
    else
     {
        while(!found){
            if(hashing[i] == str){
                found = true;
                cout<<str<<" was found in position: "<<i<<endl; //for some reason,if the loop wraps around and the word is found, i always  prints out 23
            }
            else if(i == (store - 1) || hashing[i] == "0"){
                found = true; //does not mean word was found, instead, it means that it is impossible for the word to be in the sort
                cout<<"Sorry. "<<str<<" is not in the hashed sort."<<endl;
            }
            else{
                if(i > 22) //wraps around when word is not found and can still be found
                    i = 0;
                else
                    i++;
            }
        }
    }
}

