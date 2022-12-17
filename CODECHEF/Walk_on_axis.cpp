#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i=0;
	cin>>t;
	while(i<t){
	   cin>>n;
	   int count;
       count=(n*(n+3))/2;
       cout<<count;
    //    cout<<t;
	    i+=1;
	}
	return 0;
}
