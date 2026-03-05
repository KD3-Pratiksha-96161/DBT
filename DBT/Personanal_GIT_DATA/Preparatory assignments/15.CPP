#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int count[26] = {0};   // A-Z

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        if(ch >= 'A' && ch <= 'Z')
            count[ch - 'A']++;
    }

    cout << "\nAlphabet Count:\n";
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0)
            cout << char(i + 'A') << " : " << count[i] << endl;
    }

    return 0;
}
