#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

void f_inicializar (Fila_FIFO **fila){
    *fila = NULL;
}

int f_inserir (Fila_FIFO **fila, int chave, int valor){
    Fila_FIFO *novoElemtento;

    novoElemtento = malloc(sizeof(Fila_FIFO));
    novoElemtento->chave = chave;
    novoElemtento->valor = valor;
    novoElemtento->proximo = NULL;

    if (*fila == NULL) {
        *fila = novoElemtento;
        return 1;
    } else {
        novoElemtento->proximo = *fila;
        *fila = novoElemtento;
        return 1;
    }
    //Falta retornar 0 se faltar memoria ou chave duplicada.
}

int f_obter_proxima_chave (Fila_FIFO **fila){
    Fila_FIFO *auxiliar;
    int chave;

    if (*fila == NULL) {
        return -1;
    } else {
        auxiliar = malloc(sizeof(Fila_FIFO));
        
        while ((*fila)->proximo != NULL) {
            auxiliar = *fila;
            (*fila) = (*fila)->proximo;
        }
        
        auxiliar->proximo = NULL;
        chave = (*fila)->chave;
        free (*fila);
        return chave;
    }
}

int f_consultar_proxima_chave (Fila_FIFO **fila){

}

int f_consultar_proximo_valor (Fila_FIFO **fila){

}

int f_num_elementos (Fila_FIFO **fila){

}

int f_consultar_chave_por_posicao (Fila_FIFO **fila, int posicao){

}

int f_consultar_valor_por_posicao (Fila_FIFO **fila, int posicao){

}