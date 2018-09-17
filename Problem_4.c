/*Largest palindrome product
Problem 4 
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>

int reversed_number(int a)
{
    int b = 0, d ;
    while(a != 0){
     d = a % 10;
     //printf("%d",d);
     b = b * 10 + d;
     a = a / 10;
        
        
    }
   //  printf("%d",b);
   return b;
}


int main()
{
    
    int i,j,sum,max = 0;
    for(i = 100 ; i <= 999 ; i++)
    {
        for(j = 100 ; j <= 999;j++)
        {
            sum = i * j;
            if( sum == reversed_number(sum))
            {
            printf("\n%d",sum);
            if(sum > max)
                max = sum;
            
            }
           
            
        }
        
         
      
    }

printf ("\nMaximul este: %d",max);



}
