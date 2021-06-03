// Arrays in C are sequential data items stored at some location in memory.
// The address of the array is the same as the address of the first item in the array.
// The  name of the array is also the address of the array. 
// The name of the array (the variable name) points to the first element of the array -> that's why &array[0] == array
// hence *arrray == array[0]
// so basically &x[i] is equivalent to x+i
// and x[i] is equivalent to *(x+i)

// unlike many languages, C does not have a dedicated string data type
// instead, in C, a string is just an array of characters
// '\0' is the string terminator
// char str1[] = "Hello World"

#include <stdio.h>

int main(int argc, char **argv) {
    // strings in C are defined as an array of characters
    // https://overiq.com/c-programming-101/character-array-and-character-pointer-in-c/
	char str1[] = "Hello world";
    // We use printf() function with %d format specifier to display the value of an integer variable.
    // Similarly %c is used to display character, %f for float variable, %s for string variable
    // %lf for double and %x for hexadecimal variable.
	printf("%s %d %d %c\n", str1, str1, &str1, *str1);
	// keep in mind that %s will get all the values until it gets NULL.


    // the below line declares an array of 4 pointer-to-character values, and allocates space for 4 pointers
    char *charArr[4] = {"ankara","istanbul", "rize", "artvin"}; //this is an array of characters
    printf("%s %s %c\n", *charArr, charArr[0], *(charArr[1]));
    // will print out: ankara ankara i

	return 0;

    // str1 == %str1
    // arrays are fixed length lists
}