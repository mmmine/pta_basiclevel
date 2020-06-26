#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int toknut(int g, int s, int k){
	return k+29*s+17*29*g;
}

string normal(int a){
	string nor = "";
	if(a<0){
		a=abs(a);
		nor += '-';
	}
	int g,s,k;
	g=a/493;
	s=(a%493)/29;
	k=a-29*s-493*g;
	nor += to_string(g)+'.'+to_string(s)+'.'+to_string(k);
	return nor;
}

int main(){
	int flagp=0,flaga=0;
	string p,a;
	cin>>p>>a;
	string n="";
	int pg=0,ps=0,pk=0,ag=0,as=0,ak=0;
	for(int i=0;i<p.length();++i){
		if(p[i] != '.'){
			n += p[i];
		}
		if((p[i] == '.') || (i == p.length()-1)){
			if(flagp == 0){
				pg = stoi(n);
			}
			else if(flagp == 1){
				ps = stoi(n);
			}
			else{
				pk = stoi(n);
			}
			flagp++;
			n="";
		}
	}
	n="";
	for(int i=0;i<a.length();++i){
		if(a[i] != '.'){
			n += a[i];
		}
		if(a[i] == '.' || i == a.length()-1){
			if(flaga == 0){
				ag = stoi(n);
			}
			else if(flaga == 1){
				as = stoi(n);
			}
			else{
				ak = stoi(n);
			}
			flaga++;
			n="";
		}
	}
	cout<<normal(toknut(ag,as,ak) - toknut(pg,ps,pk))<<endl;
	return 0;
}