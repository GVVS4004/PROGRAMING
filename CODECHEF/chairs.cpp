#include<iostream>
#include<vector>
 using namespace std;

int main(){
    int x,y,t,w;
    cin>>t;
    vector<vector<int>> a;
    for (int i=0;i<t;i++){
        cin>>x>>y;
        vector<int> b{x,y};
        a.push_back(b);

    }
    
    for (int z=0;z<t;z++){
        w=a[z][0]-a[z][1];
        if(w>0){
            cout<<w<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
    
}