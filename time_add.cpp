#include<iostream>
using namespace std;

class Time {
private:
    int hrs, min, sec;

public:
    void inputTime() {
        cout << "Enter the time in hours, minutes and seconds: ";
        cin >> hrs >> min >> sec;
    }

    void displayTime() const {
        cout << hrs << " hours, " << min << " minutes and " << sec << " seconds" << endl;
    }

    Time addTime(const Time &t) {
        Time at;
        at.sec = sec + t.sec;
        at.min = at.sec / 60;
        at.sec %= 60;
        at.min += min + t.min;
        at.hrs = at.min / 60;
        at.min %= 60;
        at.hrs += hrs + t.hrs;
        return at;
    }


};
int main(){
    Time t1, t2, ft;
    t1.inputTime();
    t2.inputTime();

    ft = t1.addTime(t2);
    
    cout << "The first time is: ";
    t1.displayTime();
    cout << "The second time is: ";
    t2.displayTime();
    cout << "The final time is: ";
    ft.displayTime();

    return 0;
}