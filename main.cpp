#include <iostream>
#include "Log.h"

int main()
{
    
    for(int i = 0; i < 5; i++)
    {
        Log("this is a for loop");
    }
    
    int i = 0;
    while(i < 3)
    {
        Log("this is a while loop");
        i++;
    }
    
    Log("Hello World!");    
    std::cin.get();
}
