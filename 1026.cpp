#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int c1,c2;
	cin>>c1>>c2;
	int c=c2-c1;
	if(c%100>=50){
		c=c/100+1;
	}
	else{
		c=c/100;
	}
	cout.fill('0');
	cout<<setw(2)<<c/3600<<":"<<setw(2)<<(c%3600)/60<<":"<<setw(2)<<c%60<<endl;

    return 0;
}