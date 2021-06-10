#include <stdio.h>
#define LENGTH 3

int data[LENGTH];    // integer array
char *words[LENGTH]; // array of strings

// when a variable is declared as being a pointer to type void it is known as a generic pointer.
// This is very useful when you want a pointer to point to data of different types at different times.
// To use it you just have to cast it to another kind of pointer first.

int main()
{
    int i;
    char c;
    void *the_data;

    i = 6;
    c = 'a';

    the_data = &i;
    printf("the_data points to the integer value %d\n", *(int *)the_data);

    the_data = &c;
    printf("the_data now points to the character %c\n", *(char *)the_data);

    void *gp; // a generic pointer

    printf("generic pointer example\n");

    // initialize our integer array
    for (int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    // initialize our string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%s\n", words[i]);
    }

    /* 
	* C: example of a generic pointer
	*
	*/
    gp = data;                                  // set the generic pointer to the start of the integer array
    printf("\ndata array address is %p\n", gp); // and print it out - note that a cast is not needed
    // now print out the first item in the array
    // - a cast is now needed to let the compiler know what sort of thing is being pointed to by the generic pointer
    printf("item pointed to by gp is %d\n", *(int *)gp);
    // the cast tells the compiler what the address type is and so we can do address arthimetic
    gp = (int *)gp + 1;
    printf("item pointed to by gp is now %d\n", *(int *)gp);

    // gp is now holding the address of "words"
    gp = words;                                  // set the generic pointer to the start of the string array
    printf("\nwords array address is %p\n", gp); // and print it out - note that a cast is not needed
    // now print out the first item in the array
    // - a cast is now needed to let the compiler know this is a pointer to a pointer
    printf("item pointed to by gp is %s\n", *(char **)gp);
    // the cast tells the compiler what the address type is and so we can do address arthimetic
    gp = (char **)gp + 1; // this is same as gp = words + 1;
    printf("item pointed to by gp is now %s\n", *(char **)gp);

    return 0;
}