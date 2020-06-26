#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	int n,seat;
	string s,id="",seats="",tests="";
	string idnum[1001];
	int test[1001];
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		int j=0,k=0,l=0;
		getline(cin,s);
		for(j=0;j<16;j++){
			id += s[j];
		}
		for(k=17;s[k]!=' ';k++){
			seats += s[k];
		}
		for(l=k+1;l<s.length();l++){
			tests += s[l];
		}
		seat = stoi(seats);
		idnum[seat] = id;
		test[seat] = stoi(tests);
		id = "";
		seats = "";
		tests = "";
	}
	int m,x;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		cout<<idnum[x]<<" "<<test[x]<<endl;
	}
    return 0;
}