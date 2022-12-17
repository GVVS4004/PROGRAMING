#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t,x,n,w;
    vector<vector<int>> a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        vector<int> b{n,x};
        a.push_back(b);
    }
    for (int j=0;j<t;j++){
        w=ceil(float(a[j][0])/6);
        cout<<w*a[j][1]<<endl;
    }
}
