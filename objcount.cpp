#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    static int count;

public:
    Student() {
        count++;
    }

    void inputStudent() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
    }

    void displayStudent() const {
        cout << "Name: " << name << endl;;
        cout << "Roll number: " << roll << endl;
    }

    static void displayCount() {
        cout << "The total number of students is: " << count << endl;
    }
};

int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i + 1 << endl;
        students[i].inputStudent();
    }

    cout << "The details of the students are: " << endl;
    for (int i = 0; i < n; i++) {
        students[i].displayStudent();
    }

    Student::displayCount();

    {
        Student s1;
        Student::displayCount();
    }

    Student::displayCount();

    return 0;
}