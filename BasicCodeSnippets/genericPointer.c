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

    return 0;
}