#include <iostream>
#include <string>
using namespace std;

int main(){
	int count[10] = {0};
	int num;
	string N;
	cin>>N;
	string::iterator i;
	for(i=N.begin();i<N.end();i++){
		num = *i-'0';
		count[num]++;
	}
	for(int j=0;j<10;j++){
		if(count[j]!=0){
			cout<<j<<":"<<count[j]<<endl;
		}
	}
	return 0;
}