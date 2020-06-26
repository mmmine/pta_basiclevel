#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

int main(){
	int n,nl,nm;
	string num;
	cin>>n;
	do{
		num = to_string(n);
		while(num.size()<4){
			num+='0';
		}
		sort(num.begin(),num.end());
		nm = stoi(num);
		reverse(num.begin(),num.end());
		nl = stoi(num);
		n = nl-nm;
		cout<<setw(4)<<setfill('0')<<nl<<" - "<<setw(4)<<setfill('0')<<nm<<" = "<<setw(4)<<setfill('0')<<n<<endl;
	}while(n!=6174 && n!=0);
	return 0;
}