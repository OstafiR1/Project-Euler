/*10001st prime
Problem 7 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int isThisNumberPrime(int a)
{
    int i ;
    int flag = 0;
    
    for(i = a ; i > 1 ; i --)
    {
        if(a % i == 0)
        {
            flag++;
        }
    }
    
    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int i = 2;
    int flag = 0 ;
    while(flag != 10001)
    {
        if(isThisNumberPrime(i) == 1)
        {
            flag++;
            printf("\ni = %d and flag = %d",i,flag);
        }
        i++;
    }
    
    printf("\n10 001  Prime number is : %d",i-1);
}
