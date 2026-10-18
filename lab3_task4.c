#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    printf("Rozmir masivu N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Nekorotnyi rozmir masivu.\n");
        return 1;
    }

    int arr[n];
    srand((unsigned)time(NULL));

    for (int i = 0; i < n; i++)
        *(arr + i) = rand() % 100;

    printf("\n=== 1. Pochatkovyi masiv ===\n");
    for (int i = 0; i < n; i++)
        printf("Element %3d: znachenya = %d | adresa = %p\n",
               i, *(arr + i), (void *)(arr + i));

    int *min_ptr = arr;
    int *max_ptr = arr;
    for (int *p = arr + 1; p < arr + n; p++) {
        if (*p < *min_ptr) min_ptr = p;
        if (*p > *max_ptr) max_ptr = p;
    }

    printf("\n=== 2. Rezyltat poshyky ===\n");
    printf("Minimalni element: znachenya = %d | adresa = %p\n",
           *min_ptr, (void *)min_ptr);
    printf("Maksymalni element: znachenya = %d | adresa = %p\n",
           *max_ptr, (void *)max_ptr);

    int tmp = *min_ptr;
    *min_ptr = *max_ptr;
    *max_ptr = tmp;

    printf("\n=== 3. Rezultat masivy pislya obmіnu ===\n");
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        printf("Element %3d: znachenya = %d | adresa = %p\n",
               i, *ptr, (void *)ptr);
        ptr++;
    }
    return 0;
}
