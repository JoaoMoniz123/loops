#include <stdio.h>

int main(void){

char nome;
char sexo;
int idade;

printf("Informe seu nome: \n");
scanf( " %s", &nome);

printf("Informe seu sexo: \n");
scanf(" %c", &sexo);

printf("Informe sua idade:\n ");
scanf(" %d", &idade);

if (sexo == 'f' || sexo == 'F' && idade < 25)
printf(" %s. ACEITA.\n", nome);
else
printf("NAO ACEITA.\n");

}