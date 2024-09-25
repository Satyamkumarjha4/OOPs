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

    ~Student() {
        count--;
    }

    void inputStudent() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;
    }

    void displayStudent() const {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
    }

    static void displayCount() {
        cout << "The total number of students is: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student* S = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i + 1 << endl;
        S[i].inputStudent();
    }

    cout << "The details of the students are: " << endl;
    for (int i = 0; i < n; i++) {
        S[i].displayStudent();
    }
    Student::displayCount();

    {
        cout<<"Entering a new block\n";
        Student s1;
        Student::displayCount();
    }

    cout<<"Exiting the block\n";
    Student::displayCount();

    return 0;
}
