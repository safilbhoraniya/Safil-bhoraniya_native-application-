#include <iostream>
#include <cmath>
using namespace std;


double calculateArea(double radius) {
    return 3.14 * radius * radius;
}


double calculateArea(double length, double width) {
    return length * width;
}


double calculateArea(double base, double height, char d) {
    if (d == 'T' || d == 't') {
        return 0.5 * base * height;
    } else {
        cout<<"Invalid shap code for triangle."<<endl;
        return 0.0;
    }
}

int main() {
    double circleRadius = 5.0;
    double rectangleLength = 6.0;
    double rectangleWidth = 3.0;
    double triangleBase = 8.0;
    double triangleHeight = 2.0;

    
    double circleArea = calculateArea(circleRadius);
    cout<<"Area of Circle:"<<circleArea<<endl;
    double rectangleArea = calculateArea(rectangleLength, rectangleWidth);
    cout<<"Area of Rectangle:"<<rectangleArea<<endl;

    double triangleArea = calculateArea(triangleBase, triangleHeight);
    cout<<"Area of Triangle:"<<triangleArea<<endl;

    return 0;
}
