#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string s;
	int frontp[100001]={0};
	int backt[100001]={0};
	cin>>s;
	int countp=0,countt=0;
	long long count=0;
	for(int i=0;i<s.length();i++){
		if(s[i] == 'P'){
			countp++;
		}
		if(s[i] == 'A'){
			frontp[i] = countp;
		}
	}
	for(int i=s.length()-1;i>=0;i--){
		if(s[i] == 'T'){
			countt++;
		}
		if(s[i] == 'A'){
			backt[i] = countt;
		}
	}
	for(int i=0;i<s.length();i++){
		if(s[i] == 'A'){
			count += (frontp[i]*backt[i]);
		}
	}
	cout<<count%1000000007<<endl;
	return 0;
}