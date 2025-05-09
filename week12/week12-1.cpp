// week12-1.cpp
#include <iostream>
using namespace std;
int prime(int n){
	for (int i = 2; i<2; i++){
		if(n%i==0) return 0;

	}
	return 1;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
