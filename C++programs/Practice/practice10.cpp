#include<iostream>
using namespace std;
int main (){
    float num1,num2;
    char operation;
    cout<<"CALCULATOR";
    cin>>num1>>operation>>num2;
    switch (operation)
    {
    case "+":cout<<num1<<operation<<num2<<"="<<num1-num2;
    
        break;
    
    default:
        break;
    }
}