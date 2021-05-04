#include <stdio.h>

void myFunction() {
    int myValue = 10;
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
    
}

int main() {
	myFunction();
    int myNum = 10;
    int myOther = 20;
    letsSwap(&myNum, &myOther);
	return 0;
}