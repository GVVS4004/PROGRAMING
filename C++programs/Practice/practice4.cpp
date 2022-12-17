#include <iostream>
using namespace std;

int main() {
  
  int x = 74;
  
  //add code below this line
if (((x >= 0) && (x <= 25)) || ((x >= 75) && (x <= 100))) { 
  cout << to_string(x) + " is between 0 and 25 or 75 and 100"; 
}
  //add code above this line
  
  return 0;
  
}
if ((x % 5 == 0) && (x % 2 == 0)) { 
  cout << to_string(x) + " is divisible by 5 and even";
}
else {
  cout << to_string(x) + " is not divisible by 5 or it is odd";
}
if (x=="red"){
cout<<x<<" is a primary color";
}
else if (x=="blue"){
  cout<<x<<" is a primary color";
}  
else if (x=="yellow"){
  cout<<x<<" is a primary color";
}
else{
  cout<<x<<" is not a primary color";
}  