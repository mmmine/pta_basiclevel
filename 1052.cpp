#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	string hand[11]={""};
	string eye[11]={""};
	string mouth[11]={""};
	string h,e,m,s="";
	int loc=1;
	bool flag=false;
	getline(cin, h);
	for(int i=0; i<h.length(); i++){
		if(h[i] == '['){
			s="";
			flag=true;
		}
		else if(h[i] == ']'){
			hand[loc]=s;
			loc++;
			flag=false;
		}
		else if(flag){
			s += h[i];
		}
	}
	loc=1;
	flag=false;
	s="";
	getline(cin, e);
	for(int i=0; i<e.length(); i++){
		if(e[i] == '['){
			s="";
			flag=true;
		}
		else if(e[i] == ']'){
			eye[loc]=s;
			loc++;
			flag=false;
		}
		else if(flag){
			s += e[i];
		}
	}
	loc=1;
	flag=false;
	s="";
	getline(cin, m);
	for(int i=0; i<m.length(); i++){
		if(m[i] == '['){
			s="";
			flag=true;
		}
		else if(m[i] == ']'){
			mouth[loc]=s;
			loc++;
			flag=false;
		}
		else if(flag){
			s += m[i];
		}
	}
	int n;
	cin>>n;
	while(n--){
		int lh,le,mo,re,rh;
		cin>>lh>>le>>mo>>re>>rh;
		if(hand[lh]=="" || hand[rh]=="" || eye[le]=="" || eye[re]=="" || mouth[mo]==""){
			cout<<"Are you kidding me? @\\/@"<<endl;
		}
		else{
			cout<<hand[lh]<<"("<<eye[le]<<mouth[mo]<<eye[re]<<")"<<hand[rh]<<endl;
		}
	}
	return 0;
}