#include<stdio.h>
#include"vectorOp.h"
#include <stdlib.h>

int** vMULT(int** A, int** B, int size) {
    int i, j, k;
    int **c;
    int sum; 


    c = (int **)malloc(size * sizeof(int *));
    for(i = 0; i < size; i++){
        c[i] = (int *)malloc(size * sizeof(int));
    }   


    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            
            sum = 0;
            

            for(k = 0; k < size; k++){

                sum += (*(*(A + i) + k)) * (*(*(B + k) + j));
            }
            

            *(*(c + i) + j) = sum;
        }
    }
    
    return c;
}