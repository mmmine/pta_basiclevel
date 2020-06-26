#include <iostream>
using namespace std;

int main(){
	char B[9]={'B','B','B','B','B','B','B','B','B'};
	char S[9]={'S','S','S','S','S','S','S','S','S'};
	int G[9]={1,2,3,4,5,6,7,8,9};
	int n,b=0,s=0,g=0;
	cin>>n;
	b=n/100;
	s=(n%100)/10;
	g=n%10;
	if(b>0){
		for(int i=0;i<b;i++){
			cout<<B[i];
		}
	}
	if(s>0){
		for(int i=0;i<s;i++){
			cout<<S[i];
		}
	}
	if(g>0){
		for(int i=0;i<g;i++){
			cout<<G[i];
		}
	}
	cout<<endl;
	return 0;
}