#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin>>n;
	double num[100001];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	double sum=0;
	for(int i=0;i<n;i++){
		sum = sum + ((i+1)*num[i]*(n-i));
	}
	cout<<setiosflags(ios_base::fixed)<<setprecision(2)<<sum<<endl;
	return 0;
}