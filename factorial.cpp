#include<iostream>
using namespace std;

class Factorial {
private:
    int n;
    int fact;

public:
    Factorial(int num){
        n = num;
        fact = 1;
    }

    void calculate(){
        for (int i = 1; i <= n; i++){
            fact *= i;
        }
    }

    void display(){
        cout << "The factorial of " << n << " is: " << fact << endl;
    }
};


int main(){
    int num;
    cout << "Enter the number to find the factorial: ";
    cin >> num;

    Factorial f(num);
    f.calculate();

    f.display();

    return 0;
}