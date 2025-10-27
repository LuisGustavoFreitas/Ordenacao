#ifndef SORTS_H
#define SORTS_H

typedef struct {
    int trocas;
    int iteracoes;
} Resultado;

Resultado combSort(int arr[], int n);
Resultado gnomeSort(int arr[], int n);
Resultado bucketSort(int arr[], int n);
Resultado bubbleSort(int arr[], int n);
Resultado selectionSort(int arr[], int n);
Resultado cocktailSort(int arr[], int n);

#endif
