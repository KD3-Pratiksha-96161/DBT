#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Binary: " << bitset<16>(n) << endl;
    cout << "Octal: " << oct << n << endl;
    cout << "Hexadecimal: " << hex << n << endl;

    return 0;
}
