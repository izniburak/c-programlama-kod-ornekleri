/*
Kullanıcı tarafından girilen 10 elemanlı bir dizinin elemanlarını 
selecting sort metodunu kullanarak büyükten küçüğe sıralayan program.
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


    // selecting short
    for(i = 0; i < BOYUT - 1; i++)
    {
        for(j = (i+1); j < BOYUT; j++)
        {
            if(array[i] > array[j])
            {
                int tmp;
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    printf("\n");

    for(i = 0; i < BOYUT; i++)
        printf("%d  ", array[i]);

    return 0;
}
