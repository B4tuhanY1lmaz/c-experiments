#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time = clock();

    long long count = 0;
    long long llong_max = 100000000;

    while (count < llong_max) {   // Use LLONG_MAX for maximum value
        count++;
    }

    clock_t end_time = clock();  // Get end time

    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Counted to %lld in %.2f seconds.\n", count, elapsed_time);

    return 0;
}

