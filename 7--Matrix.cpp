#include <iostream>
using namespace std;

class Matrix1D {
private:
    int size;
    int* data;

public:
    Matrix1D(int size) : size(size) {
        data = new int[size];
    }

    // Overload the + operator to perform matrix addition
    Matrix1D operator+(const Matrix1D& other) {
        if (size != other.size) {
            cout<<"Matrix size mismatch. Addition not possible."<<endl;
            return *this;
        }

        Matrix1D result(size);

        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    
    void display() {
        for (int i = 0; i < size; i++) {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    int size = 5;
    
    Matrix1D matrix1(size);
    Matrix1D matrix2(size);

    cout << "Enter elements for Matrix 1:" << std::endl;
    for (int i = 0; i < size; i++) {
        cin>>matrix1.data[i];
    }

    std::cout << "Enter elements for Matrix 2:" << std::endl;
    for (int i = 0; i < size; i++) {
        cin>>matrix2.data[i];
    }

    Matrix1D result = matrix1 + matrix2;

    cout<<"Matrix 1: ";
    matrix1.display();

    cout<<"Matrix 2: ";
    matrix2.display();

    cout<<"Matrix Addition Result: ";
    result.display();

    return 0;
}
