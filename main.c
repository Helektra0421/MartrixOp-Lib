#include<stdio.h>
#include<stdlib.h>
#include"vectorOp.h"

int main(){
 	int **a;
	int **b;
    int **c;
    int size = SIZE;
    int i,j = 0;
	
	a = (int **)malloc(3 * sizeof(int *));
	for(i = 0;i < 3;i ++){
		a[i] = (int *)malloc(3 * sizeof(int));
	}
	
	b = (int **)malloc(3 * sizeof(int *));
	for(i = 0;i < 3;i ++){
		b[i] = (int *)malloc(3 * sizeof(int));
	}

	for(i = 0;i < 3;i ++){
		for(j = 0;j < 3;j ++){
			
			printf("a%d%d = ?\n",i+1,j+1);
			scanf("%d",&a[j][i]);
			
		}
	}
	
	for(i = 0;i < 3;i ++){
		for(j = 0;j < 3;j ++){

			printf("b%d%d = ?\n",i+1,j+1);
			scanf("%d",&b[j][i]);
			
		}
	}
	
	printf("matrix A =\n");
	for(i = 0;i < 3;i ++){
		for(j = 0;j < 3;j ++){
			printf("%d ",*(*(a+j)+i));
		}
		puts("");
	}
	puts("");
	
	printf("matrix B =\n");
	for(i = 0;i < 3;i ++){
		for(j = 0;j < 3;j ++){
			printf("%d ",*(*(b+j)+i));
		}
		puts("");
	}
	puts("");

    c = vADD(a,b,SIZE);

 	printf("matrix C =\n");
	for(i = 0;i < 3;i ++){
		for(j = 0;j < 3;j ++){

			printf("%d ",*(*(c+j)+i));
		}
		puts("");
	}
    return 0;
}