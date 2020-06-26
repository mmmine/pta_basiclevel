#include <iostream>
using namespace std;

int main(){
	int n,a=0,b=0;
	cin>>n;
	while(n--){
		int a1,a2,b1,b2;
		cin>>a1>>a2>>b1>>b2;
		if(a1+b1==a2&&a1+b1!=b2){
			b++;
		}
		if(a1+b1==b2&&a1+b1!=a2){
			a++;
		}
	}
	cout<<a<<" "<<b<<endl;

    return 0;
}