#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int asc[128]={0};
	string err,right;
	string result="";
	getline(cin,err);
	if(err == ""){
		cin>>right;
		result += right;
	}
	else{
		cin>>right;
		for(int i=0;i<err.length();i++){
			asc[int(err[i])] = 1;
			if(int(err[i])>=65 and int(err[i])<=90){
				asc[int(err[i])+32] = 1;
			}
		}

		if(asc[43] == 1){
			for(int i=65;i<=90;i++){
				asc[i] = 1;
			}
		}

		for(int j=0;j<right.length();j++){
			if(asc[int(right[j])] == 0){
				result += right[j];
			}
			if(right[j] == '+'){
				result += right[j];
			}
		}
	}
	cout<<result<<endl;
	return 0;
}