#include<iostream>
using namespace std;

class Add;

class Num{
    private:
        int n;
    public:
        Num(int num){
            n = num;
        }

        friend class Add;
};

class Add{
    private:
        int sum;
    public:
        Add(){
            sum = 0;
        }

        Add(Num &n, Num &m){
            sum = 0;
            sum = n.n + m.n;
        }

        void display(){
            cout << "The sum is: " << sum << endl;
        }
};

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    Num n1(num);
    Num n2(num);

    Add a(n1, n2);

    a.display();

    return 0;
}