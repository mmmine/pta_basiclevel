#include <iostream>
using namespace std;

int Callatz(int n)
{
	if(n%2==0){
		return n/2;
	}
	return (3*n+1)/2;
}

int main(){
	int n;
	int count=0;
	cin>>n;
	while(n!=1){
		n=Callatz(n);
		count++;
	}
	cout<<count<<endl;
	return 0;
}