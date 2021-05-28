#include <stdio.h>

// dereferencing => it's the act of manipulating a value through its memory address 

void myFunction() {
    int myValue = 10;
    // * is the dereferencing operator
    // it is also know as indirection operator
    int *myPointer;
    myPointer = &myValue; 
    int *theOther;
    theOther = myPointer;
    *theOther = 50;
    *myPointer = 10000;
    printf("myValue = %d\n", myValue);
}

void letsSwap(int *b, int *c) {
    int temp;
    temp = *b;
    *b = *c;
    *c = temp;
    printf("\nAfter swapping: myNum = %d, myOther = %d \n\n", *b, *c);
}

void swapWillNotWork(int a, int b){
    int a  = b;
    // hepsini aldim :)
}

int main() {
	myFunction();
    int myNum = 10;
    int myOther = 20;
    letsSwap(&myNum, &myOther);
	return 0;

    // indirection is using a pointer to access the data at the address to which the pointer refers
    // indirection is also called dereferencing
}