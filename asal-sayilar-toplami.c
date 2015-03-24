/*
1-1000 arasındaki asal sayıların toplamını bulan program.
*/

#include <stdio.h>
#include <stdlib.h>

int asal_sayi(int);

int main ()
{
    int i, t = 0;

    for(i = 1; i < 1000; i++)
        t = t + asal_sayi(i);

    printf("1-1000 arasi asal sayilar toplami = %d\n", t);

    return 0;
}

int asal_sayi(int x)
{
    int asal_mi = 1;
    int i;

    for(i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            asal_mi = 0;
            break;
        }
    }

    if (asal_mi == 1) return x;
    else return 0;
}
