// C program to compute sum of digits in
// number.
#include <stdio.h>

/* Function to get sum of digits */
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
         n  = n / 10;  
    }
    return sum;
}

// Driver code
int main()
{
    int n = 687;

    // Function call
    printf(" %d ", getSum(n));
    return 0;
}
