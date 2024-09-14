#include <iostream>
#include "Log.h"

int main()
{
    for(int i = 0; i < 5; i++)
    {
        Log("this is a loop");
    }
    Log("Hello World!");    
    std::cin.get();
}
