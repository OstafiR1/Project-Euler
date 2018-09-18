/*Sum square difference
Problem 6 
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int sum_of_square = 0;
    int sqauare_of_sum = 0;
    int aux;
    for ( i = 1 ; i < 101 ; i++)
    {

        sum_of_square = sum_of_square + (i * i);
      
       sqauare_of_sum = sqauare_of_sum + i;
        printf("\nsqauare_of_sum is %d",sqauare_of_sum);


    }

    sqauare_of_sum = sqauare_of_sum * sqauare_of_sum;

    printf("\nsum_of_square is %d",sum_of_square);
    printf("\nsqauare_of_sum is %d",sqauare_of_sum);
    printf("\n%d\n",sqauare_of_sum - sum_of_square );
    
}


