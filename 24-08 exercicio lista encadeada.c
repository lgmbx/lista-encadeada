#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
    char nome[20];
    int idade;
    struct dados *proximo;
}dados;



void main(){

    int qtd = 0;
    dados *inicial = NULL, *aux = NULL;

    inicial = (dados*)malloc(sizeof(dados));
    aux = inicial;

    printf("quantidade de registros: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){

        printf("nome: ");
        scanf("%s", &aux->nome);
        printf("idade: ");
        scanf("%i", &aux->idade);

        if(i + 1 == qtd){
            break;
        }
        aux->proximo = (dados *)malloc(sizeof(dados));
        aux = aux->proximo;
    }

    aux->proximo = NULL;
    aux = inicial;

    while(aux != NULL){
        printf("nome: %s, idade %i\n", aux->nome, aux->idade);
        aux = aux->proximo;
    }

}
