#include <iostream>
using namespace std;

int main(){
	int N,maxnum=-1,maxgrade=-1;
	cin>>N;
	int grade[N+1]={0};
	for(int i=1; i<N+1; i++){
		int no,num;
		cin>>no>>num;
		grade[no]+=num;
	}
	for(int i=1; i<N+1; i++){
		if(grade[i]>maxgrade){
			maxgrade=grade[i];
			maxnum=i;
		}
	}
	cout<<maxnum<<" "<<maxgrade<<endl;
	return 0;
}