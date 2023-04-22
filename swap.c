// C++ program to swap two variables using a
// user defined swap()
#include <stdio.h>

// This function swaps values referred by
// x and y,
int swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(x, y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
}
