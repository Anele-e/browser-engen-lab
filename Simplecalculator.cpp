#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}
double exponentiate(double a, double b) {
    double res = 1;
    for (int i = 0; i < b; i++){
    res *= a;
}
return res;}

int main() {
    double a, b;
    char op;
    string input;

    cout << "Enter expression (a [+ - * / ^] b): press q to quit" << endl;
    while (true)
    {
        getline(cin, input);
       

        if (input == "q") {break;}

        stringstream ss(input);
        if (ss >> a >> op >> b){
            switch (op) {
                case '+': cout << add(a, b); break;
                case '-': cout << subtract(a, b); break;
                case '*': cout << multiply(a, b); break;
                case '/': cout << divide(a, b); break;
                case '^': cout << exponentiate(a, b); break;
                default: cerr << "Invalid operator!" << endl;
            }
            cout << endl;
    
        }
        
        else {
            cerr << "Invalid input, can you try again";
            cout << endl;
        }

        
    }
    
    return 0;
}

