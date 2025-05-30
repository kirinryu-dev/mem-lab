#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Worker;

int main() {
    Worker *w = (Worker*) malloc(sizeof(Worker));

    if (w == NULL) {
        printf("Worker malloc failed.\n");
        return 1;
    }

    w->id = 101;
    strcpy(w->name, "RIRISU AI");

    printf("Worker #%d: %s\n", w->id, w->name);

    free(w);
    w = NULL;

    return 0;
}
