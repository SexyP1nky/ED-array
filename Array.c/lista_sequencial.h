#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#define MAX 100 // Tamanho máximo da lista

typedef struct {
    int elementos[MAX];
    int tamanho;
} ListaSequencial;

void criar_lista_vazia(ListaSequencial *lista);
int lista_vazia(ListaSequencial *lista);
int lista_cheia(ListaSequencial *lista);
int obter_tamanho(ListaSequencial *lista);
int obter_elemento(ListaSequencial *lista, int posicao, int *valor);
int modificar_elemento(ListaSequencial *lista, int posicao, int valor);
int inserir_elemento(ListaSequencial *lista, int posicao, int valor);
int retirar_elemento(ListaSequencial *lista, int posicao);

#endif
