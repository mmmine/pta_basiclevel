#include <iostream>
using namespace std;

int main(){
	long long a,da,b,db;
	cin>>a>>da>>b>>db;
	long long ca=0,cb=0;
	while(a!=0){
		if(a%10==da){
			ca=ca*10+da;
		}
		a=a/10;
	}
	while(b!=0){
		if(b%10==db){
			cb=cb*10+db;
		}
		b=b/10;
	}
	cout<<ca+cb<<endl;
    return 0;
}