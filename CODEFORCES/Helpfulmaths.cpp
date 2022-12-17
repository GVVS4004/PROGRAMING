#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string a;
    int p[20],ch;
    int min;
    cin>>a;
    for(int i=0;i<7;i++){
        if (a[i]!='+'){
            p[i]=int(a[i]);
        }
    }
    
    for (int i=0;i<7;i++){
        min = i;
        for(int j=i+1;j<7;j++){
            if (p[j]<=p[min]){
                min = j;
            }
        }
        ch = p[min];
        p[min]=p[i];
        p[i]=ch;
    }
    for (int i=0;i<7;i++){
        cout<<char(p[i])<<"+";
    }
}