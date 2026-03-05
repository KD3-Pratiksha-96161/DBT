#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string names[5];

    cout << "Enter 5 names:\n";
    for(int i=0;i<5;i++)
        cin >> names[i];

    sort(names, names+5);

    cout << "Sorted Names:\n";
    for(int i=0;i<5;i++)
        cout << names[i] << endl;

    return 0;
}
