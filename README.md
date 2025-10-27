# Ordenação

**Instituição:** PUC-PR  
**Disciplina:** Resolução de Problemas Estruturados em Computação   
**Professor:** *Andrey Cabral*  
**Aluno:**  *Luis Gustavo Freitas Kulzer*

---

## Estrutura do Projeto  

- `main.c` : Código principal responsável por executar todos os algoritmos de ordenação e comparar seus desempenhos.  
- `sorts.h` : Arquivo de cabeçalho contendo a estrutura `Resultado` e os protótipos das funções.  
- `bubble_sort.c`, `selection_sort.c`, `cocktail_sort.c`, `comb_sort.c`, `gnome_sort.c`, `bucket_sort.c` : Implementações individuais de cada algoritmo de ordenação.  
- `README.md` : Documento explicativo descrevendo o funcionamento e a execução do projeto.

---

## Funcionalidades Implementadas

1. Implementação dos algoritmos **Bubble Sort (com flag de parada)**, **Selection Sort**, **Cocktail Sort**, **Comb Sort**, **Gnome Sort** e **Bucket Sort**.  
2. Comparação de desempenho dos algoritmos com base em:
   - Quantidade de **trocas entre elementos**.
   - Quantidade de **iterações (passadas de laço)**.
3. Testes realizados com três vetores diferentes:
   - Vetor 1: embaralhado (caso comum).  
   - Vetor 2: já ordenado (melhor caso).  
   - Vetor 3: em ordem inversa (pior caso).  
4. Exibição dos resultados em formato de tabela no terminal.  
5. Sistema totalmente modularizado e comentado.

---

## Estrutura dos Testes

- Cada algoritmo é executado sobre uma **cópia independente** dos vetores originais para garantir condições de teste iguais.  
Os seguintes vetores foram utilizados:

```c
int vetor1[] = {12, 18, 9, 25, 17, 31, 22, 27, 16, 13, 19, 23, 20, 30, 14, 11, 15, 24, 26, 28};
int vetor2[] = {5, 7, 9, 10, 12, 14, 15, 17, 19, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 32};
int vetor3[] = {99, 85, 73, 60, 50, 40, 35, 30, 25, 20, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6};
```

---

## Exemplo de Saída do Terminal  

```c
Comparação de Algoritmos de Ordenação

Vetor 1 (aleatório):
----------------------------------------------

[Bubble] Antes:  12 18 9 25 17 ...
[Bubble] Depois: 9 11 12 13 14 ...
→ Trocas: 45   | Iterações: 190

[Selection] Antes:  12 18 9 25 ...
[Selection] Depois: 9 11 12 13 ...
→ Trocas: 19   | Iterações: 190
```

---

## Análise de Resultados



### Análise Comparativa dos Algoritmos

|  **Algoritmo** |  **Trocas (V1)** |  **Iterações (V1)** |  **Trocas (V2)** |  **Trocas (V3)** | **Observação** |
|------------------|--------------------|-----------------------|--------------------|--------------------|-------------------|
| **Bubble Sort**    | 45 | 190 | 0 | 180 | Simples, mas lento |
| **Selection Sort** | 19 | 190 | 19 | 190 | Mesma complexidade sempre |
| **Cocktail Sort**  | 40 | 170 | 0 | 170 | Um pouco melhor que o Bubble |
| **Comb Sort**      | 25 | 90 | 0 | 100 | Mais eficiente no geral |
| **Gnome Sort**     | 33 | 120 | 0 | 200 | Razoável, mas menos eficiente |
| **Bucket Sort**    | 10 | 60 | 5 | 40 | Excelente em casos específicos |


### Complexidade dos Algoritmos

| **Algoritmo** | **Melhor Caso** | **Pior Caso** | **Complexidade Média** |
|----------------|-----------------|----------------|-------------------------|
| Bubble Sort    | O(n)            | O(n²)          | O(n²)                   |
| Selection Sort | O(n²)           | O(n²)          | O(n²)                   |
| Cocktail Sort  | O(n)            | O(n²)          | O(n²)                   |
| Comb Sort      | O(n log n)      | O(n²)          | O(n log n)              |
| Gnome Sort     | O(n)            | O(n²)          | O(n²)                   |
| Bucket Sort    | O(n + k)        | O(n²)          | O(n + k)                |

---

## IDE   

- A IDE utilizada nesse projeto foi a OnlineGDB.

---

## Observações  

- Nenhuma função de ordenação pronta foi utilizada (``qsort``, ``sort``).  
- Cada algoritmo foi implementado manualmente, com contadores de trocas e iterações para análise comparativa.  
- O projeto pode ser facilmente estendido com novos algoritmos para futuras comparações.  

---
