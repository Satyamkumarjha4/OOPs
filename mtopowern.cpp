#include <iostream>

using namespace std;

class PowerCalc {
public:
    double Power(double m) {
        int n = 2;
        double pow = 1.0;
        for (int i = 0; i < n; i++) {
            pow = pow * m;
        }
        return pow;
    }
    double Power(double m, int n) {
        double pow = 1.0;
        for (int i = 0; i < n; i++) {
            pow = pow * m;
        }
        return pow;
    }
};

int main() {
    double m;
    int n,c;
    double result;
    cout << "Enter a double value for m: ";
    cin >> m;
    cout<<"Do you want to enter n(0 for No and 1 for Yes):";
    cin>>c;
    if(c==1){
        cout << "Enter an integer value for n: ";
        cin >> n;
        PowerCalc p;
        result = p.Power(m, n);
    }else{
        PowerCalc p;
        result = p.Power(m);
    }
    cout << "The result is: " << result << endl;

    return 0;
}
