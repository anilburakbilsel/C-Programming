// Arrays in C are sequential data items stored at some location in memory.
// The address of the array is the same as the address of the first item in the array.
// The  name of the array is also the address of the array. 
// The name of the array (the variable name) points to the first element of the array -> that's why &array[0] == array
// hence *arrray == array[0]
// so basically &x[i] is equivalent to x+i
// and x[i] is equivalent to *(x+i)

// unlike many languages, C does not ahve a dedicated string data type
// instead, in C, a string is just an array of characters
// '\0' is the string terminator
// char str1[] = "Hello World"

#include <stdio.h>

int main(int argc, char **argv) {
	char str1[] = "Hello world";
    // We use printf() function with %d format specifier to display the value of an integer variable.
    // Similarly %c is used to display character, %f for float variable, %s for string variable
    // %lf for double and %x for hexadecimal variable.
	printf("%s %d %d %c\n", str1, str1, &str1, *str1);
	// keep in mind that %s will get all the values until it gets NULL.
	return 0;

    // str1 == %str1
    // arrays are fixed length lists
}