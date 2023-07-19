#include <stdio.h>

int main(void)
{
    unsigned long int first = 0, second = 1, sum;
    int range = 98; // Number of Fibonacci numbers to print

    for (int i = 1; i <= range; i++)
    {
        sum = first + second;
        first = second;
        second = sum;

        printf("%lu", sum);

        if (i < range)
            printf(", ");
    }

    printf("\n");
    return 0;
}
