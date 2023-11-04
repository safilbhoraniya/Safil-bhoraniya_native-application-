#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;

public:
    Student(int rollnumber) {

    }

    int getRollNumber() {
        return rollNumber;
    }
};

class Test  {
private:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int marks1, int marks2)
        : (roll), subject1Marks(marks1), subject2Marks(marks2) {}

    int getSubject1Marks() {
        return subject1Marks;
    }

    int getSubject2Marks() {
        return subject2Marks;
    }
};

class Result : public Test {
public:
    Result(int roll, int marks1, int marks2)
        : Test(roll, marks1, marks2) {}

    int getTotalMarks() {
        return getSubject1Marks() + getSubject2Marks();
    }
};

int main() {
    Result result(101, 85, 90);

    cout<<result.getRollNumber()<<endl;
    cout<<"Subject 1 Marks: " << result.getSubject1Marks()<<endl;
    cout<<result.getSubject2Marks()<<endl;
    cout<<"Total Marks:"<<result.getTotalMarks()<<endl;

    return 0;
}
