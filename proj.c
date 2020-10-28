#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct node node;

struct node{
    void *item;
    node *next;
    //node *previous;
};


node* create_linked_list()
{
    return NULL;
}

node* add(node *head, void* item)
{
    node *new_node = (node*) malloc(sizeof(node));
    new_node->item = item;
    new_node->next = head;
    return new_node;
}

int main(){
    node* list = create_linked_list();

    char item[10] = "ga";

    node* add(node *head, void *item);

    printf("%s\n", item);

/*
    FILE *pont_arq;
    char texto_str[500];

    pont_arq = fopen("netflix_titles.csv", "r");
    if (pont_arq == NULL)
    {
        printf("ERRO! O arquivo não foi aberto!\n");
    }
    else
    {
        printf("O arquivo foi aberto com sucesso!\n");
        while(fgets(texto_str, 500, pont_arq) != NULL){
            printf("%s\n", texto_str);
        }

        fclose(pont_arq);
        //getch();
    }
*/    
    return 0;
}