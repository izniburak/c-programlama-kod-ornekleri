/*
Girilen bir cümledeki toplam harf sayısını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[100];
    char harfler[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZabcçdefgğhıijklmnoöprsştuüvyzQWXqwx";
    int i, j, t = 0;

    printf("Bir cumle girin: ");
    gets(kelime);

    for(i = 0; kelime[i]!='\0'; i++)
    {
        for(j = 0; j < 64; j++)
            if(kelime[i] == harfler[j])
                t++;
    }

    printf("Toplam harf sayisi: %d", t);


    printf("\n");
    return 0;
}
