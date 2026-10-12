#include<stdio.h>


void prime(int a, int b)
{
    int i, j, isPrime;

    for (i = a; i <= b; i++)
    {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    prime(a, b);

    return 0;
}