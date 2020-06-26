#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		int p=-1,t=-1;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='P'&&p==-1){
				p=i;
			}
			else if(s[i]=='T'&&t==-1){
				t=i;
			}
			else if(s[i]!='A'){
				p=-2;
				break;
			}
		}
		if(p>-1&&t>-1&&p<t-1&&p*(t-p-1)==s.size()-1-t){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
    return 0;
}