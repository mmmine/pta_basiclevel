#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int la=a.length();
	int lb=b.length();
	bool flag=true;
	stack<char> num;
	int l=la-lb;
	int m=max(la,lb);
	if(l>0){
		while(l>0){
			b="0"+b;
			l--;
		}
	}
	else if(l<0){
		while(l<0){
			a="0"+a;
			l++;
		}
	}
	while(m>0){
		if(flag){
			int mod = ((b[m-1]-'0')+(a[m-1]-'0'))%13;
			if(mod == 12){
				num.push('K');
			}
			else if(mod == 11){
				num.push('Q');
			}
			else if(mod == 10){
				num.push('J');
			}
			else{
				num.push(mod+'0');
			}
			flag=false;
			m--;
		}
		else{
			int delta = (b[m-1]-'0')-(a[m-1]-'0');
			if(delta<0){
				delta+=10;
			}
			num.push(delta+'0');
			flag=true;
			m--;
		}
	}
	while(!num.empty()){
		cout<<num.top();
		num.pop();
	}
	cout<<endl;
	return 0;
}