#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int topline(int n){
	int count=1;
	n = n-1;
	while(n-2*(count+2)>=0){
		count+=2;
		n = n-2*count;
	}
	return count;
}

int main(){
	int n,spacenum,charnum,usednum=0;
	char c;
	string sp="",ch="";
	cin>>n>>c;
	if(n>0){
		int top = topline(n);
		for(int i=top;i>0;i-=2){
			usednum+=i;
			spacenum = (top-i)/2;
			charnum = i;
			while(spacenum--){
				sp+=' ';
			}
			while(charnum--){
				ch+=c;
			}
			cout<<sp<<ch<<endl;
			sp="";
			ch="";
		}
		for(int i=3;i<=top;i+=2){
			usednum+=i;
			spacenum = (top-i)/2;
			charnum = i;
			while(spacenum--){
				sp+=' ';
			}
			while(charnum--){
				ch+=c;
			}
			cout<<sp<<ch<<endl;
			sp="";
			ch="";
		}
	}
	cout<<n-usednum<<endl;
	return 0;
}