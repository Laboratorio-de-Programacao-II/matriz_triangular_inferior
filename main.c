#include <stdio.h>
#include <stdlib.h>
#include "triangular_inferior.h"

int main() {
    TriangularInferior m;
    int n;

    scanf("%d", &n);
    if (!ti_le(&m, n)) return 1;

    printf("Matriz original:\n");
    ti_imprime(&m);

    printf("Transposta:\n");
    ti_imprime_transposta(&m);

    ti_libera(&m);
    return 0;
}
