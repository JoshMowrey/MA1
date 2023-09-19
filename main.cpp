// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn

/*The first atribute that was bad about this program was the lack of usefull comments 
such as on line 29 of queue.cpp in which the modulus function is being used
Second I would was would be the fact that the program was initially set up fully in the main 
function which would make it difficult to expand and hard to read.
I also felt that defining the maxium size with a constant was a mistake as it did not allow for
modification of the size if someone wished to use this queue 
Beside this a queue is generally not a very usefull data structure as it is both slow
and not very information dense so a different data structure such as a BST will 
generally be better.
The effenciency of this data structure was lacking as there was no way of quickly removing things 
or adding groups of things
*/


#include "testQueue.h"



// main function
int main()
{
    // call your test functions here!
    
    test testcase;
    testcase.testSize();
    testcase.testisEmpty();
    testcase.testisFull();
    testcase.testdequeueempty();
    testcase.testdequeuepopulated();
    testcase.testenqueueempty();
    testcase.testenqueuepopulated();
    testcase.testpeekempty();
    testcase.testpeekpopulated();
    return 0;
}

