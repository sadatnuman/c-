#include <iostream>
using namespace std;
#define maxsize 100

int top = -1;
char operatorStack[maxsize];
 
void push(char d)
{
    if(top >= maxsize-1)
    {
        cout<<"Cannot Push, stack is full"<<endl;
    }
    operatorStack[++top] = d;
}
int pop()
{
    if(top<0)
    {
        cout<<"Cannot Pop, stack is empty"<<endl;
    }
    int d = operatorStack[top--];
    return d;
}
int peek()
{
    if(top<0)
    {
        cout<<"Stack is empty"<<endl;
    }
    return operatorStack[top];
}
bool isEmpty()
{
    return top<0;
}
void size()
{
    if(isEmpty())
    {
        cout<<"Cannot print, empty"<<endl;
    }
    cout<<"Stack number of elements: "<<operatorStack[top + 1]<<endl;
}
char Top() {
    if (isEmpty()) {
        return '\0'; // Return a null character to indicate an empty stack
    } else {
        return operatorStack[top];
    }
}
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}
bool isOperand(char c) {
    return ((c >= '0' && c <= '9') ||
            (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z'));
}
bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

//Infix to Postfix
string infixToPostfix(string infix) {
    string postfix;
    
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if (isOperand(c)) {
            // Append operand to postfix
            postfix += c;
        } else if (c == '(') {
            // Push '(' to stack
            push(c);
        } else if (c == ')') {
            while (!isEmpty() && Top() != '(') {
                // Append operators to postfix
                postfix += Top();
                pop();
            }
            if (!isEmpty() && Top() == '(') {
                // Pop '(' from stack
                pop();
            }
        } else if (isOperator(c)) {
            while (!isEmpty() && Top() != '(' &&
                   getPrecedence(c) <= getPrecedence(Top())) {
                // Append operator to postfix
                postfix += Top();
                pop();
            }
            // Push operator to stack
            push(c);
        }
    }
    while (!isEmpty()) {
        // Append remaining operators to postfix
        postfix += Top();
        pop();
    }

    return postfix;
}

//Evaluate
int evaluatePostfix(string postfix)
{
    int operandStack[maxsize];
    int top = -1;

    for (char c : postfix)
    {
        if (isDigit(c))
        {
            operandStack[++top] = c - '0';
        }
        else if (isOperator(c))
        {
            int operand2 = operandStack[top--];
            int operand1 = operandStack[top--];

            int result;
            switch (c)
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                    if(operand2 == 0){
                        cout<<"can not print invalid 0"<<endl;
                        operand2 = 1;
                        result = operand1 / operand2;
                        break;
                    }
                    else{
                        result = operand1 / operand2;
                        break;
                    }
            }
            operandStack[++top] = result;
        }
    }
    return operandStack[top];
}

int main() {
    string infixExpression = "5+2*(4-1)";
    cout << "Infix expression: " << infixExpression << endl;

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;
    
    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;
    cout<<"\n\n";
}



