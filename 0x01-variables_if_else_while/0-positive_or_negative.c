#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* A code that runs if different numbers are displayed tells you if its negative or positive */

/* The betty style of coding is used here */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* if the number is greater than 0: is positive*/
        
        if ( n > 0 )
        {
                printf("%d is positive\n", n);
        }
        /* if the number is 0: is zero*/
        
        else if (n == 0)
        {
                printf("%d is  zero\n", n);
        }
        /* if the number is less than 0: is negative*/
        
        else
        {
            printf("%d is negative\n", n);
        }
        return (0);
}
