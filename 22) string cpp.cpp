#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = stringLength(str);

    cout << "Length of the string: " << len << endl;

    return 0;
}

