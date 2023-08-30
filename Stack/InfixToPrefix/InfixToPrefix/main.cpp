#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

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

string reverseString(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

string infixToPrefix(string infix) {
    string prefix;
    stack<char> operatorStack;

    // Reverse the infix expression
    reverse(infix.begin(), infix.end());

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if (isOperand(c)) {
            prefix += c;
        } else if (c == ')') {
            operatorStack.push(c);
        } else if (c == '(') {
            while (!operatorStack.empty() && operatorStack.top() != ')') {
                prefix += operatorStack.top();
                operatorStack.pop();
            }

            if (!operatorStack.empty() && operatorStack.top() == ')') {
                operatorStack.pop();
            }
        } else if (isOperator(c)) {
            while (!operatorStack.empty() && operatorStack.top() != ')' &&
                   getPrecedence(c) < getPrecedence(operatorStack.top())) {
                prefix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        prefix += operatorStack.top();
        operatorStack.pop();
    }

    // Reverse the prefix expression to get the final result
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string infixExpression = "2*6/(4-1)+5*3";

    string prefixExpression = infixToPrefix(infixExpression);
    cout << "Prefix expression: " << prefixExpression << endl;

    return 0;
}

