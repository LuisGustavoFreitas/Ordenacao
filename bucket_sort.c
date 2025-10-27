#include "sorts.h"
#include <stdio.h>

#define MAX 100

Resultado bucketSort(int arr[], int n) {
    Resultado r = {0, 0};
    int bucket[MAX] = {0};

    for (int i = 0; i < n; i++) {
        bucket[arr[i]]++;
        r.iteracoes++;
    }

    int index = 0;
    for (int i = 0; i < MAX; i++) {
        while (bucket[i] > 0) {
            arr[index++] = i;
            bucket[i]--;
            r.iteracoes++;
            r.trocas++;
        }
    }
    return r;
}
