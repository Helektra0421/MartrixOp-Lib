#include<stdio.h>
#include<stdlib.h>
#include"vectorOp.h"


int vDET(int** A,int size){

    int a,b,c;
    int i,j = 0;

    a = *(*(A+0)+0) * *(*(A+1)+1) * *(*(A+2)+2) +
        *(*(A+0)+1) * *(*(A+1)+2) * *(*(A+2)+0) +
        *(*(A+0)+2) * *(*(A+1)+0) * *(*(A+2)+1);

    b = *(*(A+0)+2) * *(*(A+1)+1) * *(*(A+2)+0) +
        *(*(A+0)+0) * *(*(A+1)+2) * *(*(A+2)+1) +
        *(*(A+0)+1) * *(*(A+1)+0) * *(*(A+2)+2);

    c = a - b;

    return c;
}

int** vADJ(int** A, int size) {
    int i, j;
    int **adj;
    
    adj = (int **)malloc(size * sizeof(int *));
    for(i = 0; i < size; i++){
        adj[i] = (int *)malloc(size * sizeof(int));
    }

  
    for(i = 0; i < size; i++) {      
        for(j = 0; j < size; j++) {   
            

            int r = j; 
            int c = i;


            int r1 = (r + 1) % size;
            int r2 = (r + 2) % size;
            int c1 = (c + 1) % size;
            int c2 = (c + 2) % size;
            
  
            int val1 = *(*(A + r1) + c1);
            int val2 = *(*(A + r2) + c2);
            int val3 = *(*(A + r1) + c2);
            int val4 = *(*(A + r2) + c1);
            
            *(*(adj + i) + j) = (val1 * val2) - (val3 * val4);
        }
    }
    
    return adj;
}