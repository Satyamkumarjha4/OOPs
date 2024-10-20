#include<iostream>
using namespace std;

class Test{
    private:
        int num;
    public:
        void display(){
            cout << num << endl;
        }
        friend void setNum(Test &t, int n);
};

inline void setNum(Test &t, int n){
    t.num = n;
}

int main(){
    Test t;
    setNum(t, 10);
    t.display();
    return 0;
}