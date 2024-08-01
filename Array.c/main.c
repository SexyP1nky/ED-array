#include <stdio.h>
#include "lista_sequencial.h"

void testar_lista_sequencial() {
    ListaSequencial lista;
    criar_lista_vazia(&lista);

    printf("Lista criada. Está vazia? %d\n", lista_vazia(&lista));

    inserir_elemento(&lista, 1, 10);
    inserir_elemento(&lista, 2, 20);
    inserir_elemento(&lista, 3, 30);

    printf("Tamanho da lista: %d\n", obter_tamanho(&lista));

    int valor;
    obter_elemento(&lista, 2, &valor);
    printf("Elemento na posição 2: %d\n", valor);

    modificar_elemento(&lista, 2, 25);
    obter_elemento(&lista, 2, &valor);
    printf("Elemento na posição 2 após modificação: %d\n", valor);

    retirar_elemento(&lista, 2);
    printf("Tamanho da lista após remoção: %d\n", obter_tamanho(&lista));
}

int main() {
    testar_lista_sequencial();
    return 0;
}
