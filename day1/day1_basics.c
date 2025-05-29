// this is the a program that will return result of memory allocation

#include <stdio.h> 
#include <stdlib.h>

int main () {
    int *num ;
    num = (int *)malloc(sizeof(int)) ;

    if (num == NULL ) {
        printf("Allocation failled. \n");
        return 1 ;
    }

    *num = 9 ;
    printf("Value of num : %d " , *num ) ;

    free(num) ;

    num = NULL ;


    //return integer
    return 0 ;
}; 