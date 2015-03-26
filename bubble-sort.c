/*
Kullanıcı tarafından girilen 10 elemanlı bir dizinin elemanlarını 
bubble sort metodunu kullanarak büyükten küçüğe sıralayan program.
*/

#include <stdio.h>
#include <stdlib.h>

#define BOYUT 10
int main()
{

    int array[BOYUT];
    int i, j;

    for(i = 0; i < BOYUT; i++)
    {
        printf("Sayi girin: ");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < BOYUT; i++)
        printf("%d  ", array[i]);
    
    // bubble sort
    for(i = 1; i < BOYUT; i++)
    {
        for(j = 0; j < BOYUT - i; j++)
        {
            if(array[j] > array[j+1])
            {
                int tmp;
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

    printf("\n");

    for(i = 0; i < BOYUT; i++)
        printf("%d  ", array[i]);

    return 0;
}
