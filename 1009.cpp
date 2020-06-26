#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	stack<string> se;
	string s;
	while(cin>>s){
		se.push(s);
		if(cin.get()=='\n'){
			break;
		}
	}
	cout<<se.top();
	se.pop();
	while(!se.empty()){
		cout<<" "<<se.top();
		se.pop();
	}
	cout<<endl;
	return 0;
}