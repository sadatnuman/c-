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
        return true;
    } else {
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


