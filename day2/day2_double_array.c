#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 4;
    double *temps = (double*) calloc(size, sizeof(double));

    if (temps == NULL) {
        printf("Calloc failed.\n");
        return 1;
    }

    temps[0] = 36.5;
    temps[1] = 37.2;
    temps[2] = 38.0;
    temps[3] = 36.9;

    printf("Body temps:\n");
    for (int i = 0; i < size; i++) {
        printf("%.1f ", temps[i]);
    }

    free(temps);
    temps = NULL;

    return 0;
}
