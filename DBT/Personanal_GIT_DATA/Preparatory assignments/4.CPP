#include <iostream>
using namespace std;

int main() {
    int marks, total = 0;

    cout << "Enter 5 subject marks:\n";
    for(int i = 0; i < 5; i++) {
        cin >> marks;
        total += marks;
    }

    double avg = total / 5.0;

    if(avg >= 90) cout << "Grade: Ex";
    else if(avg >= 80) cout << "Grade: A";
    else if(avg >= 70) cout << "Grade: B";
    else if(avg >= 60) cout << "Grade: C";
    else cout << "Grade: F";

    return 0;
}
