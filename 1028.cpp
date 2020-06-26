#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int date(string s){
	string::iterator it;
	for(it=s.begin();it!=s.end();it++){
		if(*it=='/'){
			s.erase(it);
			it--;
		}
	}
	return stoi(s);
}

int main(){
	int N,count=0,today=20140906,oldest=0,youngest=2000000;
	string oldestname="",youngestname="";
	cin>>N;
	string *name = new string[N];
	string *birthday = new string[N];
	for(int i=0;i<N;i++){
		cin>>name[i]>>birthday[i];
	}
	for(int j=0;j<N;j++){
		int day=date(birthday[j]);
		if(today-day>=0 && today-day<=2000000){
			count++;
			if(today-day>oldest){
				oldest=today-day;
				oldestname=name[j];
			}
			if(today-day<youngest){
				youngest=today-day;
				youngestname=name[j];
			}
		}
	}
	if(count>0){
		cout<<count<<" "<<oldestname<<" "<<youngestname<<endl;
	}
	else{
		cout<<count<<endl;
	}
	return 0;
}