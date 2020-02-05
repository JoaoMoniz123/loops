#include <stdio.h>

int main (void){

    int a=10;
    int num;
    int b;
    int multiplicacao;

    printf(" intruduza o valor \n");
        scanf(" %d", &num);

    for( b = 0; b <= a; b++){

        multiplicacao = num * b;
        printf(" %d * %d = %d\n",num , b , multiplicacao);
    }
}