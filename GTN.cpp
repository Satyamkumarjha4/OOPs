#include <iostream>

using namespace std;

class Num2;

class Num1 {
private:
    double n;

public:
    Num1(double num1) : n(num1) {}

    friend double Greatest(Num1 &n, Num2 &m);
};

class Num2 {
private:
    double n;

public:
    Num2(double num2) : n(num2) {}

    friend double Greatest(Num1 &n, Num2 &m);
};

double Greatest(Num1 &n, Num2 &m) {
    double greatest;

    if (n.n >= m.n) {
        greatest = n.n;
    } else {
        greatest = m.n;
    }

    return greatest;
}

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Num1 n1(num1);
    Num2 n2(num2);

    cout << "The greatest number is: " << Greatest(n1, n2) << endl;

    return 0;
}
