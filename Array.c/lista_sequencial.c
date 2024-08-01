#include "lista_sequencial.h"

void criar_lista_vazia(ListaSequencial *lista) {
    lista->tamanho = 0;
}

int lista_vazia(ListaSequencial *lista) {
    return lista->tamanho == 0;
}

int lista_cheia(ListaSequencial *lista) {
    return lista->tamanho == MAX;
}

int obter_tamanho(ListaSequencial *lista) {
    return lista->tamanho;
}

int obter_elemento(ListaSequencial *lista, int posicao, int *valor) {
    if (posicao < 1 || posicao > lista->tamanho) {
        return 0; // Posição inválida
    }
    *valor = lista->elementos[posicao - 1];
    return 1;
}

int modificar_elemento(ListaSequencial *lista, int posicao, int valor) {
    if (posicao < 1 || posicao > lista->tamanho) {
        return 0; // Posição inválida
    }
    lista->elementos[posicao - 1] = valor;
    return 1;
}

int inserir_elemento(ListaSequencial *lista, int posicao, int valor) {
    if (posicao < 1 || posicao > lista->tamanho + 1 || lista_cheia(lista)) {
        return 0; // Posição inválida ou lista cheia
    }
    for (int i = lista->tamanho; i >= posicao; i--) {
        lista->elementos[i] = lista->elementos[i - 1];
    }
    lista->elementos[posicao - 1] = valor;
    lista->tamanho++;
    return 1;
}

int retirar_elemento(ListaSequencial *lista, int posicao) {
    if (posicao < 1 || posicao > lista->tamanho) {
        return 0; // Posição inválida
    }
    for (int i = posicao - 1; i < lista->tamanho - 1; i++) {
        lista->elementos[i] = lista->elementos[i + 1];
    }
    lista->tamanho--;
    return 1;
}
