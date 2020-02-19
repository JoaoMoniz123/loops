#include <stdio.h>
#include <string.h>

int main (void){

    char nome[100];
    int i = 0;
    int consoante = 0;
    int vogal = 0;
    int c;

    printf("Nome completo? \n");
        fgets(nome,300,stdin);
    c = strlen (nome);

    for (i = 0; i < c; i++){

        switch (nome[i])
        {

        case '\n':
        case ' ':
        case'"':
            break;

        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
        vogal ++;
            break;
        
        default:
        consoante ++;
            break;
        }
    }

    printf(" %d = vogal , %d = consoantes \n", vogal,consoante);
    printf(" %s ", nome);

    

}

