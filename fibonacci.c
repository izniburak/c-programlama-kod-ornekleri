/*
Fibonacci serisini bulan program.
*/

#include <stdio.h>
#include <stdlib.h>

void fibonacci(int);

int main()
{
    fibonacci(10);

    return 0;
}

void fibonacci(int sayi)
{
    int a = 0, b = 1, tasiyici, i;

    printf("%d  ", a);
    printf("%d  ", b);

    for(i = 0; i < sayi - 2; i++)
    {
        printf("%d  ", a + b);
        tasiyici = a;
        a = b;
        b = tasiyici + b;
    }

    printf("\n");
}
