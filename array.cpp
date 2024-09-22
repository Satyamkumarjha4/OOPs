#include<iostream>
using namespace std;

class Student {
private:
    string name;
    string branch;
    int roll;
    float marks[5];

public:
    void inputStudent() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the branch of the student: ";
        cin >> branch;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
        for (int i = 0; i < 5; i++) {
            cout << "Enter the marks of subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    float percentage() const {
        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total / 5;
    }

    void displayStudent() const {
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Percentage: " << percentage() << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students (up to 100): ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i + 1 << endl;
        students[i].inputStudent();
    }

    cout << "Following students have percentage greater than 70%:" << endl;
    for (int i = 0; i < n; i++) {
        if (students[i].percentage() > 70) {
            students[i].displayStudent();
        }
    }

    return 0;
}
