#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	int sum=0;
	int c0=0, c1=0;
	for(int i=0; i<str.length(); i++){
		if(str[i]>='A' && str[i]<='Z'){
			sum += (int)str[i]-64;
		}
		else if(str[i]>='a' && str[i]<='z'){
			sum += (int)str[i]-96;
		}
	}
	while(sum>0){
		if(sum%2==0){
			c0 += 1;
			sum = sum/2;
		}
		else{
			c1 += 1;
			sum = (sum-1)/2;
		}
	}
	cout<<c0<<" "<<c1<<endl;
	return 0;
}