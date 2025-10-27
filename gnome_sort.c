#include "sorts.h"

Resultado gnomeSort(int arr[], int n) {
    Resultado r = {0, 0};
    int i = 0;

    while (i < n) {
        r.iteracoes++;
        if (i == 0 || arr[i] >= arr[i - 1]) {
            i++;
        } else {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            r.trocas++;
            i--;
        }
    }
    return r;
}
