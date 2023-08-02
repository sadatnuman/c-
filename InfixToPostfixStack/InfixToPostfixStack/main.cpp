#include <iostream>
#include <string>
#include <stack>

using namespace std;

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

string infixToPostfix(string infix) {
    string postfix;
    stack<char> operatorStack;

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if (isOperand(c)) {
            // Append operand to postfix
            postfix += c;
        } else if (c == '(') {
            // Push '(' to stack
            operatorStack.push(c);
        } else if (c == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                // Append operators to postfix
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            
            
            
        if (!operatorStack.empty() && operatorStack.top() == '(') {
                // Pop '(' from stack
                operatorStack.pop();
            }
        } else if (isOperator(c)) {
            while (!operatorStack.empty() && operatorStack.top() != '(' &&
                   getPrecedence(c) <= getPrecedence(operatorStack.top())) {
                // Append operator to postfix
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            // Push operator to stack
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        // Append remaining operators to postfix
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}

int main() {
    string infixExpression = "2*6/(4-1)+5*3";

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}

