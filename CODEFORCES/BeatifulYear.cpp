#include<iostream>
#include<string>
using namespace std;
int main(){
    int y,num,flag = 0,count;
    cin>>y;
    num = y;
    while(flag==0){
        y+=1;
        num = y;
        count = 0;
        int x[10]={0};
        while(num!=0){
            x[num%10]+=1;
            num = num/10;
        }
        for(int i=0;i<10;i++){
            if (x[i]==1){ 
                count+=1;
            }    
        }
        if(count==4){
            flag = 1;
        }  
    }
    cout<<y;
}