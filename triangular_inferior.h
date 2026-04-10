#ifndef TRIANGULAR_INFERIOR_H
#define TRIANGULAR_INFERIOR_H

typedef struct {
    int     n;
    double *dados;
} TriangularInferior;

/* Aloca e inicializa a matriz com tamanho n e todos os elementos zero.
 * Retorna 1 em caso de sucesso, 0 em caso de falha de alocação. */
int ti_inicializa(TriangularInferior *m, int n);

/* Libera a memória alocada pela matriz */
void ti_libera(TriangularInferior *m);

/* Atribui o valor v ao elemento (i, j). Exige j <= i */
void ti_set(TriangularInferior *m, int i, int j, double v);

/* Retorna o valor do elemento (i, j). Retorna 0.0 para posições acima da diagonal */
double ti_get(const TriangularInferior *m, int i, int j);

/* Lê os n*(n+1)/2 elementos da stdin e inicializa a matriz */
int ti_le(TriangularInferior *m, int n);

/* Imprime a matriz triangular inferior completa (com zeros acima da diagonal) */
void ti_imprime(const TriangularInferior *m);

/* Imprime a transposta (triangular superior) da matriz */
void ti_imprime_transposta(const TriangularInferior *m);

#endif
