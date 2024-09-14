#include <iostream>
#include "Log.h"

int main()
{
    
    for(int i = 0; i < 5; i++)
    {
        if (i > 2)
            break; // breaks out of the loop, doesn't change anything in this instance.
        Log("Hello World");
    }
     
    std::cin.get();
}
