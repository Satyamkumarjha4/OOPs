#include<iostream>
using namespace std;

class Fibonacci {
private:
    int a, b;

public:
    Fibonacci() {
        a = 1;
        b = 1;
    }

    Fibonacci(const Fibonacci &f) {
        a = f.a;
        b = f.b;
    }

    void series(int n) {
        int i, next;
        cout << "\nFibonacci Series: \n";
        for (i = 0; i < n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci f;
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    Fibonacci fCopy = f;

    f.series(n);
    fCopy.series(n);

    return 0;
}
