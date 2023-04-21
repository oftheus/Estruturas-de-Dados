#include <stdio.h>
#include <stdlib.h>

//1º passo: criar struct TNo contendo um valor e um ponteiro pro próximo.
typedef struct no{
    int info;
    struct no *prox;
}TNo;

//2º passo: criar struct TLista com um ponteiro inicio apontando pro TNo.
typedef struct{
    TNo *inicio;
}TLista;

//Função para inserir no
void inserirNo(TLista *l){
    TNo *aux, *novoNo;
    aux=l->inicio;
    int novoValor;
    printf("Digite o novo valor: ");
    scanf("%d", &novoValor);

    novoNo = malloc(sizeof (TNo));
    novoNo->info = novoValor;
    novoNo->prox = NULL;

    if (aux==NULL){ //lista vazia, colocar primeiro no
        l->inicio = novoNo;
    }
    else{ //lista não vazia
        while(aux->prox!=NULL){
            aux = aux->prox;
        }
        aux->prox = novoNo;
    }
}

//Função para imprimir a lista
void imprimirLista(TLista *l){
    TNo *aux;
    aux = l->inicio;
    if (aux==NULL){
        printf("Lista vazia!\n");
    }
    else{
        while (aux != NULL){
            printf("%d ", aux->info);
            aux = aux->prox;
        }
    }
}

//Função para buscar valor na lista
void buscarNo(TLista *l){
    TNo *aux;
    aux = l->inicio;
    int valorBuscado, encontrou=0;
    printf("\nDigite o valor buscado: ");
    scanf("%d",&valorBuscado);
    if(aux==NULL){
        printf("Lista Vazia - Valor não encontrado!\n");
    }
    while(aux!=NULL){
        if (valorBuscado == aux->info){
            printf("Valor encontrado!\n");
            encontrou=1;
            break;
        }
        else{
            aux= aux->prox;
        }
    }

    if(encontrou==0){
        printf("Valor nao esta na lista!\n");
    }

}

//Função para remover no
void removerNo(TLista *l){
    TNo *aux, *ant;
    aux = ant = l->inicio;
    int achou=0;
    if (aux==NULL){
        printf("\nLista Vazia!");
    }
    int valorRemover;
    printf("\nDigite o valor a ser removido: ");
    scanf("%d",&valorRemover);
    while (aux!=NULL){
        if(valorRemover == aux->info){
            achou=1;
            if(aux==l->inicio){ //Primeiro no
                l->inicio = aux->prox;
                free(aux);
                break;
            }
            else{
                ant->prox = aux->prox;
                free(aux);
                break;
            }
        }
        else{
            ant = aux;
            aux = aux->prox;
        }
    }
    if (achou==0){
        printf("\nVALOR NÃO ENCONTRADO NA LISTA");
    }
}

int main() {
    TLista l;

    l.inicio = NULL;

    int qtd;
    printf("Digite a quantidade de numeros na lista: ");
    scanf("%d",&qtd);

    for(int i=0;i<qtd;i++){
        inserirNo(&l);
    }

    imprimirLista(&l);

    buscarNo(&l);

    removerNo(&l);

    imprimirLista(&l);

    return 0;
}
