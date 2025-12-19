#include<stdio.h>
#include"vectorOp.h"
#include <stdlib.h>


int** vINVER(int** A,int size){

    int i, j;
    int det;
    int** adj; 
    int** inv;


    if (size != 3) {
        printf("Error: Only 3x3 matrix is supported.\n");
        return NULL;
    }

 
    inv = (int**)malloc(size * sizeof(int*));
    adj = (int**)malloc(size * sizeof(int*)); 
    for (i = 0; i < size; i++) {
        inv[i] = (int*)malloc(size * sizeof(int));
        adj[i] = (int*)malloc(size * sizeof(int));
    }


    det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) 
        - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) 
        + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

    if (det == 0) {
        printf("Error: Determinant is 0. Inverse matrix does not exist.\n");
        for (i = 0; i < size; i++) {
            free(inv[i]);
            free(adj[i]);
        }
        free(inv);
        free(adj);
        return NULL;
    }


    adj[0][0] = +(A[1][1] * A[2][2] - A[1][2] * A[2][1]);
    adj[0][1] = -(A[0][1] * A[2][2] - A[0][2] * A[2][1]);
    adj[0][2] = +(A[0][1] * A[1][2] - A[0][2] * A[1][1]); 

    adj[1][0] = -(A[1][0] * A[2][2] - A[1][2] * A[2][0]);
    adj[1][1] = +(A[0][0] * A[2][2] - A[0][2] * A[2][0]);
    adj[1][2] = -(A[0][0] * A[1][2] - A[0][2] * A[1][0]);


    adj[2][0] = +(A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    adj[2][1] = -(A[0][0] * A[2][1] - A[0][1] * A[2][0]);
    adj[2][2] = +(A[0][0] * A[1][1] - A[0][1] * A[1][0]);


    printf("Determinant is: %d\n", det);
    
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            inv[i][j] = adj[i][j] / det; 
        }
    }

 
    for (i = 0; i < size; i++) {
        free(adj[i]);
    }
    free(adj);

    return inv;
}