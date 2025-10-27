#include "sorts.h"

Resultado combSort(int arr[], int n) {
    Resultado r = {0, 0};
    int gap = n;
    int trocou = 1;
    float shrink = 1.3;

    while (gap > 1 || trocou) {
        gap = (int)(gap / shrink);
        if (gap < 1) gap = 1;

        trocou = 0;
        for (int i = 0; i + gap < n; i++) {
            r.iteracoes++;
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                r.trocas++;
                trocou = 1;
            }
        }
    }
    return r;
}
