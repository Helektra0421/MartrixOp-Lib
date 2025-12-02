#include<stdio.h>
#include"vectorOp.h"

int* vADD(int* A,int* B,int size){
    int* C = malloc(size* (sizeof(int) * size));
    int i = 0;
    for(i = 0;i < size;i ++){
        
        C[i] = A[i] + B[i];

    }

    return C;
}

int* vSUB(int* A,int* B,int size){
    return C;
}