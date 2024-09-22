#include<iostream>
using namespace std;

class Complex {
private:
    float rl, img;

public:
    Complex(){
        rl = 0;
        img = 0;
    }

    Complex(float r){
        rl = r;
        img = r;
    }

    Complex(float r, float i){
        rl = r;
        img = i;
    }

    Complex add(const Complex &c){
        Complex res(0, 0);
        res.rl = rl + c.rl;
        res.img = img + c.img;
        return res;
    }

    void display(){
        cout << rl << " + " << img << "i" << endl;
    }
};

int main(){
    float r1, i1, r2, i2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    cout << "The first complex number is: ";
    Complex c1(r1, i1);
    c1.display();

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    cout << "The second complex number is: ";
    Complex c2(r2, i2);
    c2.display();

    Complex sum;
    sum = c1.add(c2);
    cout << "The sum of the two complex numbers is: ";
    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    sum.display();

    return 0;
}