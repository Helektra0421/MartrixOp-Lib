#include<stdio.h>
#include"vectorOp.h"
#include <stdlib.h>

int** vTRAN(int** A,int size){

    int** C;
    C = (int**)malloc(size * sizeof(int*));
    int i = 0;
    for(i = 0;i < size;i ++){
        C[i] = (int*)malloc(size * sizeof(int));
    }

    int j = 0;
    for(i = 0 ;i < size ; i ++){
        for(j = 0;j < size ; j ++){
            *(*(C + j) + i) = *(*(A + i) + j);
        }
    }

    return C;
}