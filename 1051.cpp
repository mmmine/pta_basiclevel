#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a,b;
	double r1,r2,r,p1,p2,p;
	cin>>r1>>p1>>r2>>p2;
	r=r1*r2;
	p=p1+p2;
	a=r*cos(p);
	b=r*sin(p);
	if(a+0.005>=0&&a<0){
		cout<<"0.00";
	}
	else{
		cout<<setiosflags(ios_base::fixed)<<setprecision(2)<<a;
	}
	if(b>=0){
		cout<<"+"<<setiosflags(ios_base::fixed)<<setprecision(2)<<b<<"i"<<endl;;
	}
	else if(b+0.005>=0&&b<0){
		cout<<"+0.00i"<<endl;
	}
	else{
		cout<<setiosflags(ios_base::fixed)<<setprecision(2)<<b<<"i"<<endl;
	}
	return 0;
}