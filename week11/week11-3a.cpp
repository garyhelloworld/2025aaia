/// week 11-3a.cpp
/// SOIT107_ADVANCE_001_C++
#include <iostream>
using namespace std;
int f(int a,int b){
	if (a<b)return -1;
	if (a==b)return 0;
	if (a>b)return 1;
}

int main(){
  int a, b;cin>>a>>b;
  cout<<f(a,b)<<endl;
  return 0;
}

