#include <iostream>
using namespace std;

int main(){
	int T,t=1;
	cin>>T;
	while(T--){
		long long a,b,c;
		cin>>a>>b>>c;
		if(a+b>c){
			cout<<"Case #"<<t<<": "<<"true"<<endl;
			t++;
		}
		else{
			cout<<"Case #"<<t<<": "<<"false"<<endl;
			t++;
		}
	}
    return 0;
}