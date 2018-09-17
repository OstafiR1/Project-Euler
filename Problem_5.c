/*Smallest multiple
Problem 5 
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20*/


#include <stdio.h>


int main()
{
 int i , x = 0 ;
 int flag = 1;
 while( flag != 20 )
 {

    for(i = 1; i <= 20; i++ )
    {
        if(x % i == 0)
        {
            flag = flag +1;
          //  printf("\nX este %d si flag este:%d",x,flag);
         //   printf("\n\n");


        }
        else
        {
            flag = 0;
        }

    }


//printf("\n%d",flag);
if(flag == 10)
{
//printf("%d",x);

}
x++;
 }

printf("%d",x-1);
    
    return 0;
    
}


