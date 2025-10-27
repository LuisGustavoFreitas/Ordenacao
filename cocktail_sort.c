#include "sorts.h"

Resultado cocktailSort(int arr[], int n) {
    Resultado r = {0, 0};
    int trocou = 1;
    int start = 0, end = n - 1;

    while (trocou) {
        trocou = 0;
        for (int i = start; i < end; i++) {
            r.iteracoes++;
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                r.trocas++;
                trocou = 1;
            }
        }
        if (!trocou) break;
        trocou = 0;
        end--;
        for (int i = end - 1; i >= start; i--) {
            r.iteracoes++;
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                r.trocas++;
                trocou = 1;
            }
        }
        start++;
    }
    return r;
}
