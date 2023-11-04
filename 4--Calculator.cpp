#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;
    char op;
    cout<<"enter character:";
    cin>>op;
    int b;
    cout<<"enter second number:";
    cin>>b;

    if(op == '+')  cout<<a + b ;
    if(op == '-')  cout<<a - b ;
    if(op == '/')  cout<<a / b ;
    if(op == '*')  cout<<a * b ;
    
    return 0;
     
}