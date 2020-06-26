#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int count[128]={0},max=0;
	char target='a';
	for(int i=0;i<s.length();i++){
		count[(int)s[i]]++;
	}
	for(int i=97;i<=122;i++){
		count[i] += count[i-32];
	}
	for(int i=97;i<=122;i++){
		if(count[i]>max){
			max = count[i];
			target = (char)i;
		}
	}
	cout<<target<<" "<<count[(int)target]<<endl;
	return 0;
}