#include <iostream>
using namespace std;

struct Student {
    string name;
    string rollNo;
    double marks;
};

int main() {
    Student s;

    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nName: " << s.name;
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nMarks: " << s.marks;

    return 0;
}
