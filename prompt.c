#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 3

void promptmatrix(int num_array[]){
	int i;
	printf("printing matrix");
	for (i = 0; i < N*N; i++){
		printf("%d  ",num_array[i]);
		if (i%N == N-1)
			printf("\n");
	}
}


void promptinput(){

	printf("Please enter input bitch.\n");
}

void promptoutput(int magic){
	printf("Matrix is %s a basic magic square\n",magic? "":"NOT");
}
