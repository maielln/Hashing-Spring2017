 /*  GHP #7 code

    This program defines and implements the hash class that constructs a 23
    element array. It also stores strings using the following hash function:
    ((first_letter) +  (last_letter))%23

    Written by Nicole Maiello
        This program is the header to Hash.cpp, the driver program, driver.cpp
        runs this program.
    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
*/
#include <iostream>
#include <string>

#ifndef HASH
#define HASH

class Hash
{
public:
    Hash();
     /*
    Constructs the hash class, which starts off with creating a 23 element array.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    void place(string);
    /*
    Determines where the word would be placed in the array using the equation:
    ((first_letter) + (last_letter))%23

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    void eq(string);
    /*
    Holds the hash equation, when called it hashes the word.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    bool empty() const;
    /*
    Determines if the position in the array where the word would be place is
    empty or already full.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    void searching();
    /*
    If the array is full, it will go on to search for the next open position.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    void display();
    /*
    Displays the array.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    int ret_store();
    /*
    Returns the last determined position.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

    void search_string(string);
    /*
    Searches for a word entered in by the user.

    Written by Nicole Maiello

    April 30, 2017
    Language: c++ (Written in Code::Blocks, g++ target)
    */

private:
    int store;
    string hashing[23];
};

#endif // HASH
