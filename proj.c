#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *pont_arq;
    pont_arq = fopen("netflix_titles.csv", "r");
    if (pont_arq == NULL)
    {
        printf("ERRO! O arquivo não foi aberto!\n");
    }
    else
    {
        printf("O arquivo foi aberto com sucesso!\n");
    }

    return 0;
}