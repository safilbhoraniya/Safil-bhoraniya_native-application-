#include <iostream>

using namespace std;

class Person {
private :
    string name;
    int age;

public:
    Person(const string & name, int age) : name(name), age(age) {

    }

    void readData() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void displayData() {
        cout<<"Name:"<<name<<"Age:"<<age<<endl;
    }
};

class Student {
private :
    float percentage;

public:
    Student(float percentage) : percentage(percentage) {}

    void readData() {
        cout <<"Enter percentage:";
        cin >>percentage;
    }

    void displayData() {
        cout<<percentage<<endl;
    }
};

class Teacher {
private :
    float salary;

public:
    Teacher(float salary) : salary(salary) {}

    void readData() {
        cout<<"Enter salary:";
        cin>>salary;
    }

    void displayData() {
        cout<<"Salary:"<<salary<<endl;
    }
};

class SchoolMember : public Person, public Student, public Teacher {
public:
    SchoolMember(const string & name, int age, float percentage, float salary)
        : Person(name, age), Student(percentage), Teacher(salary) {}

    void displayData() {
        cout<<"School Member Information"<<endl;
        Person:displayData();
        Student:displayData();
        Teacher:displayData();
    }

    void readData() {
        Person : readData();
        Student : readData();
        Teacher : readData();
    }
};

int main() {
    SchoolMember member("John", 25, 85.5, 50000);

    member.displayData();

    cout << "\nEnter new data:\n";
    member.readData();

    member.displayData();

    return 0;
}
