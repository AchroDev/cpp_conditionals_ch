#include <iostream>
#include "Log.h"

int main()
{
    
    for(int i = 0; i < 5; i++)
    {
        if (i > 2)
            return 0; // forces a return of 0 from the function, once i is > than 2.
        Log("Hello World");
    }
     
    std::cin.get(); // this code will never get executed as a return of 0 has already been provided.
}
