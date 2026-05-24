#include "h_01.h"

int main()
{
    int x = 9;

    if (x == 5)
    {
        log("true");
        log("first statement is true");
    }

    if (5) // even though x is not 5 , it will still work bcoz , 
    // in cpp a statement is only false if its comparison result is 0
    // true is usually one , but can be anything other than 0
    {
        log("true");
        log("second statement is true");
    }
    std::cin.get();
}