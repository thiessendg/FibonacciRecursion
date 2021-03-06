// FibonacciRecursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

unsigned long fibonacci(unsigned long); // function prototype

int main()
{
    // calculate the fibonacci values of 0 through 10
    for (unsigned int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci( " << counter << " ) = " << fibonacci(counter) << endl;
    // display higher fi bonacci values
    cout << "\nfibonacci( 20 ) = " << fibonacci(20) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci(30)<< endl;
    cout << "fibonacci( 35 ) = " << fibonacci(35)<< endl;

    return 0;
} // end main

// recursive function fibonacci
unsigned long fibonacci(unsigned long number)
{
    if ((0 == number) || (1 == number)) // base cases
        return number;
    else // recursion step
        return fibonacci(number - 1) + fibonacci(number - 2);
} // end function fi bonacci