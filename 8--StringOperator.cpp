#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString() : str() {

    }

    MyString(const std::string& s) : str(s) {
        
    }

    MyString operator+(const MyString& other) {
        MyString result;
        result.str = this->str + other.str;
        return result;
    }

    void display() {
        cout<<str<<endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("world!");

    MyString concatenated = s1 + s2; // Using operator overloading

    cout<<"Concatenated string:";
    concatenated.display();

    return 0;
}
