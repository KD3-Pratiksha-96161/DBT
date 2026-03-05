#include <iostream>
using namespace std;

class Employee {
public:
    string firstName, lastName;
    double salary;

    Employee(string f, string l, double s) {
        firstName = f;
        lastName = l;
        salary = s > 0 ? s : 0;
    }

    double yearlySalary() {
        return salary * 12;
    }

    void raiseSalary() {
        salary *= 1.10;
    }

    void display() {
        cout << firstName << " " << lastName
             << " Yearly Salary: " << yearlySalary() << endl;
    }
};

int main() {
    Employee e1("Yash","Patil",20000);
    Employee e2("Rahul","Sharma",25000);

    e1.display();
    e2.display();

    e1.raiseSalary();
    e2.raiseSalary();

    cout << "After 10% Raise:\n";
    e1.display();
    e2.display();

    return 0;
}
