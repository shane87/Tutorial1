#include <iostream>
#include <limits>   //For std::numeric_limits
#include <cstdlib>  //For std::exit()
#include "fucntions.h"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    std::cout << "Divide by zero invalid!!" << std::endl;
    return -1;
}

int modulo(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    std::cout << "Divide by zero invalid!!" << std::endl;
    return -1;
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    //Check for failed extraction
    if (!std::cin) //if the previous extraction failed
    {
        if (std::cin.eof()) //if the stream was closed
        {
            std::exit(1);
        }

        //Handle the failure
        std::cin.clear(); //Return from 'fail' mode
        ignoreLine(); //And clear the stream

        return true;
    }

    //Extraction succeeded!
    return false;
}

bool checkForZero(int b)
{
    if (b == 0)
    {
        std::cout << "Can't divide by zero!!" << std::endl;
        return true;
    }
    else
        return false;
}
