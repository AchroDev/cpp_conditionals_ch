#include <iostream>
#include "Log.h"

int main()
{
    
    for(int i = 0; i < 5; i++)
    {
        if (i > 2)
            continue; // can only be inside a loop, says go to next iteration.
        Log("Hello World");
    }
     
    std::cin.get();
}
