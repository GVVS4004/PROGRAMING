#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n,arr[n],a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    sort(arr,arr+n);
    vector<int> even,odd;
    for (int j=0;j<n;j++){
        if (arr[j]%2==0){
            even.push_back(arr[j]);

        }
        else{
            odd.push_back(arr[j]);
        }
    }
    vector<int> final;
    sort(even.begin(),even.end(),greater<int>())
}