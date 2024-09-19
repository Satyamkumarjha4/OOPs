#include <iostream>

using namespace std;

class Number {
private:
    double a, b, c;

public:
    Number(double num1, double num2, double num3) : a(num1), b(num2), c(num3) {}

    friend double Greatest(Number &n);
};

double Greatest(Number &n) {
    double greatest;

    if (n.a >= n.b || n.a >= n.c) {
        greatest = n.a;
    } else if (n.b >= n.a || n.b >= n.c) {
        greatest = n.b;
    } else {
        greatest = n.c;
    }

    return greatest;
}

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    Number num(num1, num2, num3);
    double result = Greatest(num);
    cout << "The greatest number is: " << result << endl;

    return 0;
}
