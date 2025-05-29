# 🔍 C Memory Cheatsheet

##  malloc
int *x = (int *)malloc(sizeof(int));

## calloc
int *arr = (int *)calloc(5, sizeof(int));

## free
free(x);

## safety 
if (ptr == NULL) { /* handle error */ }

⛔️ Danger
Memory leaks: forgetting free()

Dangling pointer: using after free

Null pointer: uninitialized usage