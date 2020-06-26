#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

bool islegal(string s){
	int add=0,num;
	for(int i=0;i<17;i++){
		if(s[i]>='0'&&s[i]<='9'){
			num=s[i]-'0';
			add=add+(num*weight[i]);
		}
		else return false;
	}
	int check=add%11;
	if(m[check]==s[17]){
		return true;
	}
	else return false;
}

int main(){
	int N,count=0;
	cin>>N;
	string idcardnum[N];
	for(int i=0; i<N; i++){
		cin>>idcardnum[i];
	}
	for(int i=0; i<N; i++){
		if(!islegal(idcardnum[i])){
			count++;
			cout<<idcardnum[i]<<endl;
		}
	}
	if(count == 0){
		cout<<"All passed"<<endl;
	}
	return 0;
}