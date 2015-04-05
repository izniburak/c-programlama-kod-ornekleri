/*
Girilen N adet isim değerini alfabetik olarak (A-Z) sıralayan program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOYUT 10

char isim[BOYUT][15];

int main()
{
    int i, j;

    for(i = 0; i < BOYUT; i++)
    {
        printf("isim girin: ");
        gets(isim[i]);
    }

    for(i = 0; i < BOYUT; i++)
        printf("%s\n", isim[i]);

    for(i = 0; i < BOYUT; i++)
    {
        for(j = 0; j < BOYUT - 1; j++)
        {
            if(strcmp(isim[j], isim[i]) > 0)
            {
                char tmp[10];
                strcpy(tmp, isim[i]);
                strcpy(isim[i], isim[j]);
                strcpy(isim[j], tmp);
            }
        }
    }

    printf("\n");

    for(i = 0; i < BOYUT; i++)
        printf("%s\n", isim[i]);

    printf("\n");
    return 0;
}
