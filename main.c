#include <stdio.h>
#include <string.h>
#include "sorts.h"

#define TAM 20

// Copia um vetor para outro
void copiarVetor(int dest[], int src[], int n) {
    for (int i = 0; i < n; i++) dest[i] = src[i];
}

// Imprime o vetor
void printVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[TAM] = {12,18,9,25,17,31,22,27,16,13,19,23,20,30,14,11,15,24,26,28};
    int vetor2[TAM] = {5,7,9,10,12,14,15,17,19,21,22,23,24,25,27,28,29,30,31,32};
    int vetor3[TAM] = {99,85,73,60,50,40,35,30,25,20,15,14,13,12,11,10,9,8,7,6};

    int temp[TAM];
    Resultado r;

    printf("Comparação de Algoritmos de Ordenação\n");

    const char* nomes[] = {"Bubble", "Selection", "Cocktail", "Comb", "Gnome", "Bucket"};
    Resultado (*algoritmos[])(int[], int) = {
        bubbleSort, selectionSort, cocktailSort, combSort, gnomeSort, bucketSort
    };

    int nAlg = 6;
    int nVet = 3;
    int* vetores[] = {vetor1, vetor2, vetor3};
    const char* nomesVet[] = {"Vetor 1 (aleatório)", "Vetor 2 (ordenado)", "Vetor 3 (reverso)"};

    for (int v = 0; v < nVet; v++) {
        printf("\n%s:\n", nomesVet[v]);
        printf("----------------------------------------------\n");

        for (int a = 0; a < nAlg; a++) {
            copiarVetor(temp, vetores[v], TAM);

            printf("\n[%s] Antes:  ", nomes[a]);
            printVetor(temp, TAM);

            r = algoritmos[a](temp, TAM);

            printf("[%s] Depois: ", nomes[a]);
            printVetor(temp, TAM);

            printf("→ Trocas: %-4d | Iterações: %-4d\n", r.trocas, r.iteracoes);
        }
        printf("\n==============================================\n");
    }

    return 0;
}
