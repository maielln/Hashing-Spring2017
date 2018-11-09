 /*  GHP #7 code

    Driver program that:
        a) query's the user for fifteen words and stores them using the hash
        technique: ((first_letter) +  (last_letter))%23

        b) prints out the contents of each position of the array showing vacant
        as well as filled positions

        c) repeatedly query's the user for a new word, hashes it, checks for it's
        inclusion in the array, and reports the result. Continues until the user
        says to stop or the array runs out of room.

    Written by Nicole Maiello
        This program runs with the two programs, Hash.cpp and Hash.h
    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
*/
#include <iostream>

using namespace std;

#include "Hash.h"

int main(void)
{
    Hash hasher;
    string word;
    int i;
    cout<<"Words will be ordered in an array using the hashing function: ((first_letter) +  (last_letter))%23"<<endl;
    for(i = 0; i < 15; i++){
        cout<<"Please enter a word to be hashed: "<<endl;
        cin>>word;
        hasher.place(word);
    }

    hasher.display();

    while(word != "123"){
        cout<<"Enter a word to search for... Case sensitive!! (Type 123 to terminate the program.)"<<endl;
        cin>>word;
        if (word != "123"){
            hasher.search_string(word);
        }
    }
    cout<<"Ok! Terminating program.";
    return 0;
}
