#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

long long gcb(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcb(b,a%b);
}

string reduction(long long a,long long b){
	if(b == 0){
		return "Inf";
	}
	else if(b!=0 && a==0){
		return "0";
	}
	else{
		long long x = gcb(abs(a),abs(b));
		a = a/x;
		b= b/x;
		string result = "";
		long long absa = abs(a);
		long long absb = abs(b);
		if(absa >= absb){
			result += to_string(absa/absb);
			if(absa%absb !=0){
				result += ' ' + to_string(absa%absb) + '/' + to_string(absb);
			}
		}
		else{
			result += to_string(absa) + '/' + to_string(absb);
		}
		if(a*b<0){
			result = "(-" + result + ')';
		}
		return result;
	}
}

int main(){
	string s;
	getline(cin,s);
	long long i,j,k,l;
	string me1="",de1="",me2="",de2="";
	for(i=0;s[i]!='/';i++){
		me1 += s[i];
	}
	for(j=i+1;s[j]!=' ';j++){
		de1 += s[j];
	}
	for(k=j+1;s[k]!='/';k++){
		me2 += s[k];
	}
	for(l=k+1;l<s.length();l++){
		de2 += s[l];
	}
	i=stoi(me1),j=stoi(de1),k=stoi(me2),l=stoi(de2);
	long long up,down;
	up = i*l + j*k;
	down = j*l;
	cout<<reduction(i,j)<<" + "<<reduction(k,l)<<" = "<<reduction(up,down)<<endl;
	up = i*l - j*k;
	down = j*l;
	cout<<reduction(i,j)<<" - "<<reduction(k,l)<<" = "<<reduction(up,down)<<endl;
	up = i*k;
	down = j*l;
	cout<<reduction(i,j)<<" * "<<reduction(k,l)<<" = "<<reduction(up,down)<<endl;
	up = i*l;
	down = j*k;
	cout<<reduction(i,j)<<" / "<<reduction(k,l)<<" = "<<reduction(up,down)<<endl;
	return 0;
}