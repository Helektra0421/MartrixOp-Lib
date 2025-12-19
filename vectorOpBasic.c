#include<stdio.h>
#include<stdlib.h>
#include"vectorOp.h"

int** vADD(int** A,int** B,int size){

	int i,j = 0;
	int **c;
	c = (int **)malloc(size * sizeof(int *));
	
	for(i = 0;i < 3;i ++){
		c[i] = (int *)malloc(size * sizeof(int));
	}	


	for(i = 0;i < size;i ++){
		for(j = 0;j < size;j ++){
			*(*(c+j)+i) = *(*(A+j)+i) + *(*(B+j)+i);
		}
	}
    return c;
}

int** vSUB(int** A,int** B,int size){

	int i,j = 0;
	int **c;
	c = (int **)malloc(3 * sizeof(int *));
	
	for(i = 0;i < 3;i ++){
		c[i] = (int *)malloc(3 * sizeof(int));
	}

	for(i = 0;i < size;i ++){
		for(j = 0;j < size;j ++){
			*(*(c+j)+i) = *(*(A+j)+i) - *(*(B+j)+i);
		}
	}
    return c;
}

int** vEWM(int* A,int* B,int size){

	int i,j = 0;
	int **c;
	c = (int **)malloc(size * sizeof(int *));
	
	for(i = 0;i < size;i ++){
		c[i] = (int *)malloc(size * sizeof(int));
	}

	for(i = 0;i < size;i ++){
		for(j = 0;j < size;j ++){
			*(*(c+j)+i) = *(*(A+j)+i) * *(*(B+j)+i);
		}
	}
    return c;
}