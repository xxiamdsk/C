// Fibonacci Series using Space Optimized Method
#include <stdio.h>
int fib(int n)
{
    long long int a = 0, b = 1, c, i;
    if (n == 0)
        printf("%d",a);

    printf("0\n");
    printf("1\n");

    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%lld\n", b);
    }
    
}

int main()
{
    int n = 50;
    fib(n);
}
