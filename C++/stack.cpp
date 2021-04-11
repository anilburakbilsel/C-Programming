/* a C++ program which implements
    a basic stack data structure 
    */

// macros and file inclusions
#include <iostream>
#define MAX 1000

using std::cout;

class Stack
{
    int top;

public:
    // Maximum size of Stack
    int a[MAX];

    // constructor
    Stack()
    {
        top = -1;
    }

    bool push(int x)
    {
        if (top >= (MAX - 1))
        {
            cout << "we cannot push anymore: a stack overflow!!!";
            return false;
        }
        else
        {
            a[++top] = x;
            cout << x << " pushed into the stack\n";
            return true;
        }
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "no more item to return in the stack: a stack underflow!!!";
            return 0;
        }
        else
        {
            // returns the element in the  top
            // also modifies the variable of the top by decrementing it by 1
            int x = a[top--];
            return x;
        }
    }

    int peek()
    {
        if (top < 0)
        {
            cout << "stack is empty";
            return 0;
        }
        else
        {
            int x = a[top];
            return x;
        }
    }

    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    Stack* s = new Stack();
    s->push(10);
    s->push(20);
    s->push(30);
    cout << s->pop() << " Popped from stack\n";
    //print all elements in stack :
    cout << "Elements present in stack : ";
    while (!s->isEmpty())
    {
        // print top element in stack
        cout << s->peek() << " ";
        // remove top element in stack
        s->pop();
    }
    delete s;
    return 0;
}