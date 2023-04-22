#include <stdio.h>


int try1();

int main()
{
    int num;
    printf("Enter the values");
    scanf("%d", &num);
    // try(num);
}

// int try(int num)
// {
//     printf("your number");
//     printf("%d", num);
//     num++;
//     try1(num);
// }

int try1(int num)
{
    printf("%d", num);
}
