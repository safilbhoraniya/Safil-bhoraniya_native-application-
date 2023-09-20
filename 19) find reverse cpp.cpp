#include <iostream>
using namespace std;

void reverseString(string& str, int start, int end) {
    if (start >= end) {
        return; 
    }

    // Swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    reverseString(str, 0, len - 1);

    cout << "Reversed string: " << str << endl;

    return 0;
}

