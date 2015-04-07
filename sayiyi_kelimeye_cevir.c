/*
Girilen bir sayıyının tüm basamaklarını kelime olarak yazan program.
örnek: 1453 => bir dort bes uc
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *word[10] = {"sifir", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
    char *number[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    char value[10];
    int i, j;

    printf("Sayisal bir ifade giriniz: ");
    gets(value);

    for(i = 0; value[i]; i++)
    {
        for(j = 0; j < 10; j++)
            if(value[i] == *number[j])
                printf("%s ", word[j]);
    }

    printf("\n");
    return 0;
}
