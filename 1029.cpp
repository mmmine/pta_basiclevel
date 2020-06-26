#include <iostream>
#include <string>
using namespace std;

int main(){
	string target,reality,broken="";
	bool hashtable[128]={false};
	cin>>target;
	cin>>reality;
	string::iterator t;
	string::iterator r;
	t=target.begin();
	r=reality.begin();
	do{
		if(*t == *r){
			t++;
			r++;
		}
		else{
			if(*t>='a' && *t<='z'){
				*t=*t-32;
			}
			broken+=*t;
			t++;
		}
	}while(t!=target.end()&&r!=reality.end());
	while(t<target.end()){
		if(*t>='a' && *t<='z'){
				*t=*t-32;
			}
		broken+=*t;
		t++;
	}
	for(int i=0;i<broken.size();i++){
		if(!hashtable[broken[i]]){
			cout<<broken[i];
			hashtable[broken[i]]=true;
		}
	}
	cout<<endl;
	return 0;
}