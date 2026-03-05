#include <iostream>
using namespace std;

int main() {
    string arr[6] = {"Java","C","Python","Java","C++","C"};

    cout << "Duplicate Strings:\n";
    for(int i=0;i<6;i++)
        for(int j=i+1;j<6;j++)
            if(arr[i] == arr[j])
                cout << arr[i] << endl;

    return 0;
}

