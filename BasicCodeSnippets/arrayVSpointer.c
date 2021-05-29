#include <stdio.h>
// as we know, an array and an address are equivalent

int main(int argc, char **argv) {
    // str1 is an array  
	char str1[] = "Hello world";
    // str2 is a pointer
    char *str2 = "my name is anil";
    // str2 points to the address at which the characters are stored
    // so a pointer is a variable that stores the address of an array
    // the pointer variable itself is stored at one address; the array is stored at a completely different adderss
	printf("%s %d %c\n", str1, str1, *str1);
	return 0;
}