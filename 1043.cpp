#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string s;
	cin>>s;
	char ab[6]={'P','A','T','e','s','t'};
	int count[6]={0},sum=0,flag=0;
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'P':
				count[0]++;sum++;break;
			case 'A':
				count[1]++;sum++;break;
			case 'T':
				count[2]++;sum++;break;
			case 'e':
				count[3]++;sum++;break;
			case 's':
				count[4]++;sum++;break;
			case 't':
				count[5]++;sum++;break;
		}
	}
	while(sum>0){
		if(count[flag]>0){
			cout<<ab[flag];
			count[flag]--;
			sum--;
		}
		flag = (flag+1)%6;
	}
	cout<<endl;
	return 0;
}