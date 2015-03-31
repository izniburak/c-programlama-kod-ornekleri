/*
NxN boyutundaki iki matrisin köşegenlerinin çarpımını bulan program. 
*/

#include <stdio.h>
#include <stdlib.h>

#define BOYUT 3
int main()
{
    int dizi1[BOYUT][BOYUT];
    int dizi2[BOYUT][BOYUT];
    int i, j;
    int rnd;

    srand(time(NULL));

    // dizi1'i rastgele sayilarla dolduralim.
    for(i=0; i < BOYUT; i++)
    {
        for(j=0; j < BOYUT; j++)
        {
            rnd = 1 + rand() % 10;
            dizi1[i][j] = rnd;
        }
    }

    // dizi2'yi rastgele sayilarla dolduralim.
    for(i=0; i < BOYUT; i++)
    {
        for(j=0; j < BOYUT; j++)
        {
            rnd = 1 + rand() % 10;
            dizi2[i][j] = rnd;
        }
    }

    for(i = 0; i < BOYUT; i++)
        printf("%d\n", (dizi1[i][i] * dizi2[i][i]));

    return 0;
}
