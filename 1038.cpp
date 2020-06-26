#include <iostream>
using namespace std;

int main(){
	int a[101]={0};
	int n,score;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>score;
		a[score]++;
	}
	int k;
	cin>>k;
	for(int i=0;i<k-1;i++){
		cin>>score;
		cout<<a[score]<<" ";
	}
	cin>>score;
	cout<<a[score]<<endl;
	return 0;
}