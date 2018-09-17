/*Largest prime factor
Problem 3 
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 */

#include <stdio.h>


int main()
{
 int i , j;
 int flag = 0;
    for( i = 2 ; i < 13194  ; i++)
    {
       if(600851475143  % i == 0)
       printf("\n%d",i);
   }
 }


