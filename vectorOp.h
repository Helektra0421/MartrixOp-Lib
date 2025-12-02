#ifndef VECTOROP_H
#define VECTOROP_H
#define SIZE 3

int* vADD(int* A,int* B,int size);
int* vSUB(int* A,int* B,int size);
int* vEWM(int* A,int* B,int size);
int* vMULT(int* A,int* B,int size);
int* vTRAN(int* A,int* B,int size);

int* vDET(int* A,int size);
int* vADJ(int* A,int size);
int* vINVER(int* A,int size);

#endif