#include <iostream>
using namespace std;

int main() {
    int n, num, max;
    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter numbers:\n";
    cin >> max;

    for(int i = 1; i < n; i++) {
        cin >> num;
        if(num > max)
            max = num;
    }

    cout << "Maximum = " << max;
    return 0;
}
