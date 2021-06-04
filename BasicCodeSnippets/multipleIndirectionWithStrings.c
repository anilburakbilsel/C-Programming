#include <stdio.h>

// define is a preprocessor directive
#define LENGTH 3

// a string is a sequence of characters terminated by a null
char* words[LENGTH];		// some strings
// words is an array of pointers to characters (an array to pointer characters)
// there are 3 pointers in words array
// words is an array to hold a sequence of strings

int main(int argc, char **argv) {
	char *pc;			// a pointer to a character
	char **ppc;			// a pointer to a pointer to a character
	printf ("multiple indirection example\n");
	// initialize our string array
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	for (int i = 0; i < LENGTH; i++) {
		printf("%s\n", words[i]);
	}
	/*
	* B: a pointer to an array of strings
	*    - the same as a pointer to a pointer to a character
	*
	*/
	ppc = words;							// initialize the pointer to a pointer to a character
	for (int i = 0; i < LENGTH; i++) {		// loop over each string
		ppc = words + i;
		pc = *ppc;
		printf(" i am here now %s\n", *ppc);
        printf("lets print out the value of pc as well %s\n", pc); // that should be same as the *ppc
		while (*pc != 0) {					// process each character in a string - don't forget that it ends with a null
			printf("%c ", *pc);				// print out each character of the string individually
			pc += 1;
		}
		printf("\n");
	}
	char* myName[1];
	myName[0]= "anil bilsel";
	printf("%c\n", myName[0][0]);
	printf("%c\n", myName[0][1]);
	printf("%s\n", myName[0]);

	char adim[] = "yilmaz bilsel";
	printf("%s\n", adim);
	printf("%c\n", adim[0]);
	adim[1] = 'a';
	printf("%c\n", adim[1]);
	printf("%s\n", adim);


	return 0;
}