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
        int t1 = a, t2 = b, next;
        for (int i = 0; i < n; i++) {
            cout << t1 << " ";
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci f;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    Fibonacci fCopy = f;
    f.series(n);
    fCopy.series(n);
    return 0;
}