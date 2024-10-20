#include<iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    Student() {
        count++;
    }

    ~Student() {
        count--;
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

    Student::displayCount();

    {
        cout<<"Entering a new block\n";
        Student s1;
        s1.displayCount();
    }

    cout<<"Exiting the block\n";
    Student::displayCount();

    return 0;
}
