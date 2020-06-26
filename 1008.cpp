#include <iostream>
using namespace std;


void reverse(int *a,int x,int y){
	int temp;
	for(int i=0;i<(y-x+1)/2;i++){
		temp=a[x+i];
		a[x+i]=a[y-i];
		a[y-i]=temp;
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	if(m>n){
		m=m%n;
	}
	int *a = new int[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,n-m,n-1);
	reverse(a,0,n-m-1);
	reverse(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	delete [] a;
    return 0;
}