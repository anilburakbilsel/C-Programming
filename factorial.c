#include <stdio.h>
int main(){
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    // show error if the user enters a negative integer
    if (n < 0)
        printf("factorial works for only positive numbers");
    else{
        for(i = 1; i <= n; ++i){
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    printf("the end of our very simple C program");
    return 0;
}