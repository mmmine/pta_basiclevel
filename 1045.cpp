#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int count=0,i;
	int n;
	cin>>n;
	int num[100000];
	int leftmax[100000];
	int rightmin[100000];
	int result[100000];
	for(i=0; i<n; i++){
		cin>>num[i];
	}
	leftmax[0]=num[0];
	rightmin[n-1]=num[n-1];
	for(i=1; i<n; i++){
		leftmax[i]=max(leftmax[i-1],num[i-1]);
	}
	for(i=n-2; i>=0; i--){
		rightmin[i]=min(rightmin[i+1],num[i+1]);
	}
	for(i=0; i<n; i++){
		if(num[i]>=leftmax[i] && num[i]<=rightmin[i]){
			result[count] = num[i];
			count++;	
		}
	}
	cout<<count<<endl;
	if(count==0){
		cout<<endl;
	}
	else{
		for(int i=0; i<count-1; i++){
			cout<<result[i]<<" ";
		}
		cout<<result[count-1]<<endl;
	}
	return 0;
}