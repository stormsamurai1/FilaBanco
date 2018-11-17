#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fila {
    struct fila* proximo;
    int chave;
    int valor;
} Fila_FIFO;

void f_inicializar (Fila_FIFO **fila);

int f_inserir (Fila_FIFO **fila, int chave, int valor);

int f_obter_proxima_chave (Fila_FIFO **fila);

int f_consultar_proxima_chave (Fila_FIFO **fila);

int f_consultar_proximo_valor (Fila_FIFO **fila);

int f_num_elementos (Fila_FIFO **fila);

int f_consultar_chave_por_posicao (Fila_FIFO **fila, int posicao);

int f_consultar_valor_por_posicao (Fila_FIFO **fila, int posicao);