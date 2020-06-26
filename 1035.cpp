#include <iostream>
#include <algorithm>
using namespace std;

int n;

void insertion(int a[], int b[]){
	bool flag = false;
	for(int i=2;i<=n;i++){
		sort(a,a+i);
		if(flag){
			cout<<"Insertion Sort"<<endl;
			cout<<a[0];
			for(int j=1;j<n;j++){
				cout<<" "<<a[j];
			}
			cout<<endl;
			return;
		}
		if(equal(a,a+n,b)){
			flag = true;
		}
	}
}

void merge(int a[], int b[]){
	bool flag = false;
	for(int i=2;;i=i*2){
		for(int j=0;j<n;j=j+i){
			sort(a+j,a+(j+i<n?j+i:n));
		}
		if(flag){
			cout<<"Merge Sort"<<endl;
			cout<<a[0];
			for(int j=1;j<n;j++){
				cout<<" "<<a[j];
			}
			cout<<endl;
			return;
		}
		if(equal(a,a+n,b)){
			flag = true;
		}
		if(i>n){
			break;
		}
	}
}

int main(){
	cin>>n;
	int a1[105],a2[105],b[105];
	for(int i=0;i<n;i++){
		cin>>a1[i];
		a2[i] = a1[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	insertion(a1,b);
	merge(a2,b);
	return 0;
}