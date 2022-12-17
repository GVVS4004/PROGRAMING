#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"please enter the lengths of the sides of the triangle";
    cin>>a>>b>>c;
    if (a==b==c){
        cout<<"the triangle is equilateral triangle";
    }
    else if(a!=b && a!=c && b!=c)
    {
        cout<<"the triangle is scalene triangle";
    }
    else{
        cout<<"the triangle is isosceles triangle";
    }
}