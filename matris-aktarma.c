/*
NxN'lik bir A matrisini aynı boyutta bir B matrisine aktaran program.
*/

#include <stdio.h>
#include <stdlib.h>

#define BOYUT 4
int main()
{
    int matrisA[BOYUT][BOYUT], matrisB[BOYUT][BOYUT];
    int i, j;

    for(i = 0; i < BOYUT; i++)
    {
        for(j = 0; j < BOYUT; j++)
        {
            printf("%d. satir, %d. sayi: ", (i+1), (j+1));
            scanf("%d", &matrisA[i][j]);
        }
    }

    for(i = 0; i < BOYUT; i++)
        for(j = 0; j < BOYUT; j++)
            matrisB[j][i] = matrisA[i][j];


    // ekrana yazdiralim.
    printf("\n\n");

    for(i = 0; i < BOYUT; i++)
    {
        for(j = 0; j < BOYUT; j++)
        {
            printf("%d\t", matrisA[i][j]);
            if((j+1) % BOYUT == 0) printf("\n");
        }
    }

    printf("\n\n");

    for(i = 0; i < BOYUT; i++)
    {
        for(j = 0; j < BOYUT; j++)
        {
            printf("%d\t", matrisB[i][j]);
            if((j+1) % BOYUT == 0) printf("\n");
        }
    }

    return 0;
}
