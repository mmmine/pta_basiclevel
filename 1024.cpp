#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	string sci,dec;
	string reg = "";
	cin>>sci;
	int zeronum = 0;
	int nozero = 0;
	int eindex = sci.find("E");
	int pindex = sci.find(".");
	dec = sci.substr(pindex+1,eindex-3);
	int pow = stoi(sci.substr(eindex+1));
	if(pow == 0){
		reg += sci.substr(1,eindex-1);
	}
	else if(pow>0){
		reg += sci[1];
		if(pow>=dec.length()){
			reg += dec;
			zeronum = pow - dec.length();
			while(zeronum--){
				reg += '0';
			}
		}
		else{
			reg += dec.substr(0,pow);
			reg += '.';
			reg += dec.substr(pow);
		}
	}
	else{
		reg += sci[1];
		reg += dec;
		zeronum = abs(pow)-1;
		while(zeronum--){
			reg = '0' + reg;
		}
		reg = "0." + reg;
	}
	while(reg[nozero] == '0'){
		nozero++;
	}
	if(reg[nozero] == '.'){
		reg = reg.substr(nozero-1);
	}
	else{
		reg = reg.substr(nozero);
	}
	if(sci[0] == '-'){
		reg = '-' + reg;
	}
	cout<<reg<<endl;
	return 0;
}