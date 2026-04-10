## Enunciado

Uma **matriz triangular inferior** de tamanho `n` possui elementos não-nulos apenas nas posições `(i, j)` onde `j <= i`. Para armazená-la de forma compacta, em vez de alocar uma matriz `n x n` completa, armazenamos apenas os `n*(n+1)/2` elementos existentes em um array unidimensional.

O mapeamento usado é:

```
elemento (i, j)  ->  dados[i*(i+1)/2 + j]
```

Exemplo para `n = 3`:

```
Matriz:          Array dados:
 1  0  0
 2  3  0    ->   [ 1, 2, 3, 4, 5, 6 ]
 4  5  6
```

O repositório já contém o TAD completo em `triangular_inferior.h` e `triangular_inferior.c`, com as seguintes funções implementadas:

- `ti_inicializa` — inicializa a matriz com tamanho `n` e todos os elementos zero
- `ti_le` — lê os elementos da entrada padrão
- `ti_imprime` — imprime a matriz completa (com zeros acima da diagonal)

Sua tarefa é implementar as seguintes funções:

- `ti_set`: atribui um valor ao elemento `(i, j)`.
- `ti_get`: retorna o valor do elemento `(i, j)`, devolvendo `0.0` para posições acima da diagonal.
- `ti_imprime_transposta`: imprime a matriz transposta.

A **transposta** de uma matriz `A` é a matriz `Aᵀ` onde o elemento na posição `(i, j)` de `Aᵀ` é igual ao elemento `(j, i)` de `A`. A transposta de uma triangular inferior é uma **triangular superior**:

```
Original:        Transposta:
 1  0  0          1  2  4
 2  3  0    ->    0  3  5
 4  5  6          0  0  6
```

### Entrada

A primeira linha contém um inteiro `n` (1 ≤ n ≤ 100). As `n` linhas seguintes contêm os elementos da triangular inferior: a linha `i` (começando em 0) contém `i+1` valores separados por espaço.

### Saída

Duas seções, nesta ordem:

1. Matriz original: seguido da matriz completa `n x n` (zeros acima da diagonal), com elementos separados por espaço.
2. Transposta: seguido da transposta `n x n`, com elementos separados por espaço.

### Exemplos de entrada e saída

| Entrada | Saída |
| :--- | :--- |
| 3<br>1<br>2 3<br>4 5 6 | Matriz original:<br>1 0 0<br>2 3 0<br>4 5 6<br>Transposta:<br>1 2 4<br>0 3 5<br>0 0 6 |
| 1<br>7 | Matriz original:<br>7<br>Transposta:<br>7 |
| 4<br>1<br>2 3<br>4 5 6<br>7 8 9 10 | Matriz original:<br>1 0 0 0<br>2 3 0 0<br>4 5 6 0<br>7 8 9 10<br>Transposta:<br>1 2 4 7<br>0 3 5 8<br>0 0 6 9<br>0 0 0 10 |

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- `triangular_inferior.c`

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e teste com `make test`
