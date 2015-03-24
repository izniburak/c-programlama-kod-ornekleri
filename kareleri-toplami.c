/*
Kullanıcıdan alacağı n değerine kadar olan sayıların 
karelerinin toplamını hesaplayan program.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1, t = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        t = t + (i * i);

    printf("Sonuc: %d", t);

    return 0;
}
