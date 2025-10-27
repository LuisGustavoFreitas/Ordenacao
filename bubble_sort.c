#include "sorts.h"

Resultado bubbleSort(int arr[], int n) {
    Resultado r = {0, 0};
    int trocou;

    for (int i = 0; i < n - 1; i++) {
        trocou = 0;
        for (int j = 0; j < n - i - 1; j++) {
            r.iteracoes++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                r.trocas++;
                trocou = 1;
            }
        }
        if (!trocou) break;
    }
    return r;
}
