#include <iostream>
using namespace std;

int main(){
	int a[10];
	int first;
	for(int i=0; i<10; i++){
		cin>>a[i];
	}
	for(int i=1; i<10; i++){
		if(a[i]>0){
			first = i;
			a[i]--;
			break;
		}
	}
	cout<<first;
	for(int i=0; i<10; i++){
		while(a[i]--){
			cout<<i;
		}
	}
	cout<<endl;

    return 0;
}