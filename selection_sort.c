#include "sorts.h"

Resultado selectionSort(int arr[], int n) {
    Resultado r = {0, 0};

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            r.iteracoes++;
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            r.trocas++;
        }
    }
    return r;
}
