#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int size = 5;

    numbers = (int*) malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        numbers[i] = i * 2;
    }

    printf("INT values:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    free(numbers);
    numbers = NULL;

    return 0;
}
