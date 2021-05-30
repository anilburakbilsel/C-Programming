#include <stdio.h>

#define LENGTH 3

// an array
int data[LENGTH];			// some integers

int main(int argc, char **argv) {
	int *pi;			// a simple pointer to an integer
	int **ppi;			// a pointer to a pointer to an integer

	printf ("multiple indirection example\n");

	// initialize our integer array
	for (int i = 0; i < LENGTH; i++) {
		data[i] = i;
	}
	for (int i = 0; i < LENGTH; i++) {
		printf("%d\n", data[i]);
	}
    
	/*
	* A: simple pointer to a pointer to an integer
	*
	*/
	pi = data;								// set the pointer to an integer to the start of the data array
	ppi = &pi;								// and set the pointer to a pointer to pi itself

	for (int i = 0; i < LENGTH; i++) {
		printf("array address is %p\n", data);
		printf("item pointed to by pi is %d\n", *pi);
		printf("the address of pointer pi is %p\n", pi);
		printf("item pointed to by ppi is %p\n", *ppi);
		printf("item pointed to by double indirection of ppi is %d\n\n", **ppi);
        printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);
    
		pi += 1;		// advance the pointer to point to the next element of the data array (this will not change the address of pi, only the value stored will be change - in this case the value is the address)
		// when we advance the pointer pi by 1, ppi will be pointing to the new pointer pi
		// because ppi is pointing pi
		// the value stored by ppi is the address of pi
	}

	return 0;
}