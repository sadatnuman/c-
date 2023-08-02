#include <iostream>
using namespace std;
#define size 100
#define invalid -9999999

int stack[size];
int top = 0;

 
bool isEmpty()
{
    return top == 0;
}
bool isFull()
{
    return top == size;
}
bool push(int d)
{
    if(isFull())
    {
        cout<<"Cannot Push, stack is full"<<endl;
        return false;
    }
    else{
        stack[top] = d;
        cout<<"Pushed "<<d<< " into stack at index "<<top<<endl;
        top++;
        return true;
    }
}
bool pop()
{
    if(isEmpty())
    {
        cout<<"Cannot Pop, stack is empty"<<endl;
        return false;
    }
    else{
        top--;
        return true;
    }
}
int peek()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return invalid;
    }
    else{
        return stack[top-1];
    }
}
void display()
{
    if(isEmpty())
    {
        cout<<"Cannot print, empty"<<endl;
    }
    else{
        cout<<"Stack elements: "<<endl;
        for(int i = top-1; i>=0 ; i--)
        {
            cout<<stack[i]<<endl;
        }
    }
}
int main()
{
    push(2);
    push(4);
    push(5);
    push(3);
    push(10);
    display();
    pop();
    display();
    return 0;
}
