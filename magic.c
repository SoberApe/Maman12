#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 3

int checkmagic(int[]);

void promptmatrix(int[]);
void promptinput();
void promptoutput(int);

int main(){
	/*declarations*/
	int num_array[N*N] = {0}; 
	int count = 0;
	int num;
	int magic = 0; 
	
	/*prompt user for input*/

	promptinput();

	/*take input form user*/
	while (scanf("%d",&num)==1){
		if (count++ < N*N)
			num_array[count-1] = num;
	}

	/* reach EOF or error condition*/

	if (count > N*N)
		return printf("ERROR: overflow input\n");

	if (count < N*N)
		return printf("ERROR: underflow or invalid input\n");
		 
	/* if no error , check num_array for magic*/
	magic = checkmagic(num_array);

	if(magic)
		promptmatrix(num_array);

	/* call output function*/
	promptoutput(magic);
		
	return magic;
}


