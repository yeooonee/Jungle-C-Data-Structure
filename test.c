#include <stdio.h>
#include <stdlib.h>

void modify(int *x){
    x = malloc(sizeof(int));
    *x = 100;
}

int main(void) {
    int *p = NULL;
    modify(p);
    printf("%d\n", *p);
}