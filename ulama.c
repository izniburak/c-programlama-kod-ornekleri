/*
Girilen bir cümlede ulama olup olmadığını bulan program.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[50];
    char letter1[] = "AEIİOÖUÜaeıioöuü";
    char letter2[] = "BCÇDFGĞHJKLMNPRSŞTVYZbcçdfgğhjklmnprsştvyz";
    int i, j, x = 0, y = 0;

    printf("Bir cumle girin: ");
    gets(word);

    for(i = 0; word[i]!='\0'; i++)
      if(word[i] == ' ')
          break;

    for(j = 0; j < 42; j++)
      if(word[i-1] == letter2[j]) x++;

    if(x)
    {
      for(j = 0; j < 16; j++)
        if(word[i+1] == letter1[j]) y++;

      if(y)
        printf("Ulama vardir.");
      else
        printf("Ulama yoktur.");
    }
    else
      printf("Ulama yoktur.");

    printf("\n");
    return 0;
}
