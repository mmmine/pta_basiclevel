#include <iostream>
using namespace std;

int main(){
	int *a = new int[100];
	int flag = 0;
	int n = 0;
	int x,i=0;
	while(cin>>x){
		a[i] = x;
		if(cin.get()=='\n'){
			break;
		}
		i++;
		n++;
	} 
	for(int j=0;j<n;j=j+2){
		if(a[j]*a[j+1]){
			if(flag){
				cout<<" ";
				flag = 1;
			}
			cout<<a[j]*a[j+1]<<" "<<a[j+1]-1;
			flag = 1;
		}
	}
	if(!flag){
		cout<<"0 0"<<endl;
	}
	else{
		cout<<endl;
	}
    return 0;
}