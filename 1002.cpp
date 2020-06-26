#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string s;
	int sum=0;
	stringstream ss;
	cin>>s;
	for(int i=0;i<s.size();i++){
		sum=sum+(s[i]-'0');
	}
	ss<<sum;
	ss>>s;
	string temp[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i=0;i<s.size()-1;i++){
		cout<<temp[s[i]-'0']<<" ";
	}
	cout<<temp[s[s.size()-1]-'0'];
    return 0;
}