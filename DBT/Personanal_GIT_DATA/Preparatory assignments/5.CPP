#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if(isupper(ch)) cout << "Uppercase";
    else if(islower(ch)) cout << "Lowercase";
    else if(isdigit(ch)) cout << "Digit";
    else cout << "Special Character";

    return 0;
}
