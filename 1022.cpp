#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int a,b,n,sys,q,r;
	cin>>a>>b;
	n=a+b;
	string num = "";
	cin>>sys;
	while(n/sys != 0){
		q = n/sys;
		r = n%sys;
		num+= (r+'0');
		n = q;
	}
	num+= (n+'0');
	reverse(num.begin(),num.end());
	cout<<num<<endl;
	return 0;
}