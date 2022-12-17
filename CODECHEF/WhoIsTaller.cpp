#include<iostream>
using namespace std;
int main(){
    int x,y,n;
    char a[200];
    cin>>n;
    for (int i=0;i<n;i++){

    cin>>x>>y;
    if(x>y){
        a[i]='A';
    }
    else{
        a[i]='B';
    }
    }
    printf("%c",&a);
return 0;

}