/*(x{x[]}x)

We will read the expression as a string and for each character we will do the following three things:
Whenever we get an opening parenthesis, we will push it into the stack.
When we get a closing parenthesis we will check that with the top of the stack. If the top of the stack
has the same type of parenthesis but an opening one, we will pop it.
We skip the character in the string which is not a parenthesis.*/

#include <iostream>
#include <string>

using namespace std;

bool isValidExpression(const string& expression) {
    int counter = 0;
    int length = expression.length();

    for (int i = 0; i < length; i++) {
        char symbol = expression[i];
        if (symbol == '(') {
            counter++;
        } else if (symbol == ')') {
            counter--;
            if (counter < 0) {
                return false;
            }
        }
    }

    if (counter == 0) {
        // Number of opening and closing parentheses matches
        return true;
    } else {
        // Mismatched opening and closing parentheses
        return false;
    }
}

int main() {
    string expression = "(x{x[ ]}x)";

    if (isValidExpression(expression)) {
        cout << "The expression is valid." << endl;
    } else {
        cout << "The expression is invalid." << endl;
    }

    return 0;
}

