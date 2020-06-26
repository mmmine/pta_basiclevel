#include <iostream>
using namespace std;

bool isprime(int n){
	if(n<2){
		return false;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
}
int main(){
	int count=0;
	int n;
	cin>>n;
	for(int i=4;i<=n;i++){
		if(isprime(i)&&isprime(i-2)){
			count++;
		}
	}
	cout<<count<<endl;
    return 0;
}