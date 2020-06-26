#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string had,want;
	cin>>had>>want;
	int count = 0;
	bool flag = true;
	int a[128] = {0},b[128] = {0};
	int c[128] = {0};
	for(int i=0;i<had.length();i++){
		a[(int)had[i]]++;
	}
	for(int i=0;i<want.length();i++){
		b[(int)want[i]]++;
	}
	for(int i=0;i<want.length();i++){
		if(b[(int)want[i]]>a[(int)want[i]]){
			flag = false;
		}
	}
	if(flag){
		count = had.length() - want.length();
		cout<<"Yes "<<count<<endl;
	}
	else{
		for(int i=0;i<want.length();i++){
			if((b[(int)want[i]]>a[(int)want[i]]) && (c[(int)want[i]] == 0)){
				count = count + b[(int)want[i]] - a[(int)want[i]];
				c[(int)want[i]]++;
			}
		}
		cout<<"No "<<count<<endl;
	}
	return 0;
}