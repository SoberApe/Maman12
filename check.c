#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define N 3

int checkmagic(int num_array[]){

	int sum_array[2*N+2] = {0};
	int sanity[N*N] = {0};
	int i,r,c;
	int magic = 1;

	for (i = 0;i < N*N;i++)
	{
		if (sanity[num_array[i]] == 1|| num_array[i] > N*N)
			magic = 0;		

		sanity[num_array[i]] = 1;
		c = i% N;
		r = i/ N;

		printf("num in pos %d is %d, Colum: %d Row: %d\n",i,num_array[i],c,r);

		/*add to colum sum*/
		sum_array[r] += num_array[i];
		/*add to row sum*/
		sum_array[N+c] += num_array[i];
		/*add to LtoR diag sum*/
		if (c == r)
			sum_array[2*N] += num_array[i];
		/*add to RtoL diag sum*/
		if ((c+r+1) == N)
			sum_array[2*N+1] += num_array[i];
		
	}

	for (i = 0;i < 2*N+2;i++){
		printf("index: %d, num: %d, magic: %d\n",i,sum_array[i],magic); 
		magic = magic & (sum_array[0] == sum_array[i]);
	}

	printf("Hello?\n");
	return 1;

}
