#include<iostream>
using namespace std;
int main(){
    float weight,height,bmi;
    cout<<"weight:";
    cin>>weight;
    cout<<"height:";
    cin>>height;
    bmi=weight/(height *height);
    if (bmi < 18.5)
       cout<<"underweight"<<endl;
    else if (bmi >25)
       cout<<"Overweight"<<endl;
    else
       cout<<"Normal weight"<<endl;
    cout<<"Your BMI is :"<<bmi<<endl;         
return 0;
}