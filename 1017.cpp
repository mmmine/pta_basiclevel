#include <iostream>
#include <string>
using namespace std;

int main(){
	string A,Q="";
	int B,R=0;
	cin>>A>>B;
	string::iterator i;
	for(i=A.begin();i<A.end();i++){
		R = R*10 + *i-'0';
		Q+= R/B+'0';
		R=R%B;
	}
	while(!Q.empty() && Q[0]=='0'){
		Q.erase(Q.begin());
	}
	if(Q.empty()){
		cout<<'0'<<" "<<R<<endl;
	}
	else{
		cout<<Q<<" "<<R<<endl;
	}
	return 0;
}