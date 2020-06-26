#include <iostream>
using namespace std;

int main(){
	int N,temp,n;
	cin>>N;
	n=N;
	int sum=0;
	while(N--){
		cin>>temp;
		sum += 11*(n-1)*temp;
	}
	cout<<sum<<endl;
	return 0;
}