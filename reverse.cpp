#include <iostream>
#include <cstring>  // for strlen
using namespace std;

int main() {
    int size;
    cout << "Enter the maximum size of the string: ";
    cin >> size;

    // Allocate memory dynamically (+1 for null terminator)
    char* str = new char[size + 1];

    cout << "Enter your string: ";

    cin.getline(str, size + 1);
    int len = strlen(str);
    cout << "Reversed string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    delete[] str;
    return 0;
}
