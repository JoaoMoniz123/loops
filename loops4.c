#include <stdio.h>

int main (void){

    int array[11];
    int i;
    int total = 0;
    int media = 0;

    for (i = 0; i < 11; i++){

       array[i] = i;
        printf(" %d", array[i]);

        total = total + array[i];
        media = total /10;
    }
    printf( " total = %d ", total);
    printf(" media = %d", media);
}