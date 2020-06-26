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
	int m,n;
	cin>>m>>n;
	int count = 0,j;
	int flag = 1;
	int *a = new int[10000];
	for(int i=2;count<n;i++){
		if(isprime(i)){
			a[count] = i;
			count++;
		}
	}
	for(j=m-1;j<n;j++){
		if(flag == 10){
			cout<<a[j]<<endl;
			flag = 1;
		}
		else{
			cout<<a[j];
			if(j!=n-1){
				cout<<" ";
			}
			flag++;
		}
	}
	if(flag>1 && flag<10){
		cout<<endl;
	}

    return 0;
}