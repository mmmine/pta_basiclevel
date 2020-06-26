#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int N,maxlength=-1;
	long long p;
	cin>>N>>p;
	long long a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	sort(a,a+N);
	int j=0,k=0;
	while(k<N){
		while(a[j]*p>=a[k]&&k<N){
			k++;
		}
		maxlength = max(maxlength,k-j);
		j++;
	}
	cout<<maxlength<<endl;
	return 0;
}