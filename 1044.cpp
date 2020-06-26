#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string low[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string high[12]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	string s;
	int n;
	cin>>n;
	getchar();
	for(int j=0;j<n;j++){
		getline(cin, s);
		if(s[0]>='0' && s[0]<='9')
		{
			int num = stoi(s);
			string result;
			if(num/13 != 0){
				result += high[num/13 - 1];
			}
			if(num/13 !=0 && num%13 !=0){
				result += ' ';
			}
			if(num/13 == 0 || num%13 !=0){
				result += low[num%13];
			}
			cout<<result<<endl;
		}
		else
		{
			int loc=0,result=0,flag;
			for(int i=0;i<s.length();i++){
				if(s[i] == ' '){
					loc=i;
				}
			}
			if(s.length()>3){
				string h,l;
				int hn=0,ln=0;
				for(int i=0;i<loc;i++){
					h+=s[i];
				}
				for(int i=loc+1;i<s.length();i++){
					l+=s[i];
				}
				if(l=="tret"){
					ln=0;
				}
				else{
					for(int i=0;i<13;i++){
						if(low[i] == l){
							ln=i;
						}
					}
				}
				for(int i=0;i<12;i++){
					if(high[i] == h){
						hn=i+1;
					}
				}
				result = hn*13+ln;
			}
			else{
				for(int i=0;i<12;i++){
					if(high[i] == s){
						result=(i+1)*13;
					}
				}
				if(result == 0){
					for(int i=0;i<13;i++){
						if(low[i] == s){
							result=i;
						}
					}
				}
			}
			cout<<result<<endl;
		}
		s="";
	}
	return 0;
}