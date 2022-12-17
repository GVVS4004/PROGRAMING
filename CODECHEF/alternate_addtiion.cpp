// #include<bits/stdc++.h>
// using namespace std;
// int main(){ 
//     int t,a,b;
//     vector<vector<int>> x;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         cin>>a>>b;
//         vector<int> c{a,b};
//         x.push_back(c);
//     }
//     for (int j=0;j<t;j++){
//         int w=0;
//         while(true){
//             if (x[j][0]>=x[j][1]){
//                 break;
//             }
//             if(w%2==0){
//                 x[j][0]+=1;
//             }
//             else{
//                 x[j][0]+=2;
//             }
//             w+=1;


//         }
//         if (x[j][0]==x[j][1]){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
// 	cout<<"HI";
	for(int i=0;i<t;i++){
	   int a,b,c,d;
	    cin>>a>>b>>c>>d;
	   // cout<<"HI";
       cout<<a<<b<<c<<d;
	    if((a-c)<(b-d)){
	        cout<<"First"<<endl;
	    }
	    else if((a-c)>(b-d)){
	        cout<<"Second"<<endl;
	    }
	    else{
	        cout<<"Any"<<endl;
	    }
	}
// 	cout<<"Hi";
	return 0;
}
