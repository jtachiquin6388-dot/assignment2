#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>

#include "ArrayStack.h"

using namespace std;

// Token

struct Token {
    string value;   // number, operator, or parenthesis

    Token(const string& v) : value(v) {}


};

// Helper
bool isOperator(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}
bool isParenthesis(const string& s) {
    return s == ")" || s == "(";
}

bool isNumber(const string& s) {
    return isdigit(s[0]);
}



// Tokenizer

vector<Token> tokenize(const string& line) {
    vector<Token> tokens;

    string token = "";

    for (int i = 0; i < line.length(); i++) {


        if (!isspace(line[i])) {
            token += line[i];
        }

        if (isspace(line[i]) && !token.empty()) {
            tokens.push_back(token);
            token = "";
        }
        else if ( isOperator(token) ) {
            tokens.push_back(token);
            token = "";
        }
        else if (isParenthesis(token)) {
            tokens.push_back(token);
            token = "";
        }
    }

    if ( isNumber(token)) {
        tokens.push_back(token);
    }

    return tokens;
}

// Helpers

int precedence(const string& op) {
    if ( op == "*" || op == "/") {
        return 1;
    }
    else if ( op == "+" || op == "-") {
        return 2;
    }
    return 0;
}


// Detection

bool isValidPostfix(const vector<Token>& tokens) {
    int nums = 0;
    //int maxInARow = 0;
    for (const auto& token : tokens) {
        if (isNumber(token.value)) {
            nums++;
            //numsInARow++;
        }
        else if (isOperator(token.value)) {
            if (nums < 2) {
                return false;
            }
            nums--;
        }
        else {
            return false;
        }
    }

    if (nums == 1) {
        return true;
    }
    return false;
}

bool isValidInfix(const vector<Token>& tokens) {
    // TODO
    return false;
}

// Conversion

vector<Token> infixToPostfix(const vector<Token>& tokens) {
    vector<Token> output;
    // TODO
    return output;
}

// Evaluation

double evalPostfix(const vector<Token>& tokens) {
    ArrayStack<double> stack;

    for (const auto& token : tokens) {
        if (isNumber(token.value)) {
            stack.push(stod(token.value));
        }
        else if (isOperator(token.value)) {
            double num1 = stack.top();
            stack.pop();

            double num2 = stack.top();
            stack.pop();

            double result;
            if (token.value == "*") {
                result = num1 * num2;
            }
            else if (token.value == "/") {
                result = num2 / num1;
            }
            else if (token.value == "+") {
                result = num1 + num2;
            }
            else if (token.value == "-") {
                result = num2 - num1;
            }

            stack.push(result);
        }
    }
    return stack.top();
}

// Main

int main() {







    /*
    string line;
    getline(cin, line);

    vector<Token> tokens = tokenize(line);

    if (isValidPostfix(tokens)) {
        cout << "FORMAT: POSTFIX\n";
        cout << "RESULT: " << evalPostfix(tokens) << "\n";
    }
    else if (isValidInfix(tokens)) {
        vector<Token> postfix = infixToPostfix(tokens);
        cout << "FORMAT: INFIX\n";
        cout << "POSTFIX: ";
        for (const auto& t : postfix) {
            cout << t.value << " ";
        }
        cout << "\n";
        cout << "RESULT: " << evalPostfix(postfix) << "\n";
    }
    else {
        cout << "FORMAT: NEITHER\n";
        cout << "ERROR: invalid expression\n";
    }

    return 0;
    */
}
