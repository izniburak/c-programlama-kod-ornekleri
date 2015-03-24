/*
Klavyeden 0 (sıfır) girilene kadar, girilen sayıların 
mükemmel sayı olup olmadığını bulan program.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, t = 0;
    do
    {
        printf("Sayi girin: ");
        scanf("%d", &sayi);
        
        for(i = 1; i < sayi; i++)
            if(sayi % i == 0)
                t = t + i;

        if(t == sayi)
            printf("EVET. Sayi mukemmel sayidir.\n\n");
        else
            printf("HAYIR. Sayi mukemmel sayi degildir.\n\n");

        t = 0;
        i = 1;
    } while (sayi != 0);

    return 0;
}
