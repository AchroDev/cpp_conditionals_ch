#include <iostream>
#include "Log.h"

int main()
{
    // For loop
    for(int i = 0; i < 5; i++)
    {
        Log("this is a for loop");
    }
    
    
    // While loop
    int i = 0;
    while(i < 3)
    {
        Log("this is a while loop");
        i++;
    }
    
    // Do-while Loop
    do
    {
        
    } while(i < 5);
    
    Log("Hello World!");    
    std::cin.get();
}
