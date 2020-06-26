#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct MoonCake{
	double store;
	double sell;
	double price;
};

bool cmp(MoonCake a, MoonCake b){
	return a.price > b.price;
}

int main(){
	int n;
	double D,ans=0;
	cin>>n>>D;
	MoonCake cake[1001];
	for(int i=0;i<n;i++){
		cin>>cake[i].store;
	}
	for(int i=0;i<n;i++){
		cin>>cake[i].sell;
		cake[i].price = cake[i].sell / cake[i].store;
	}
	sort(cake, cake + n, cmp);
	for(int i=0; i<n; i++){
		if(cake[i].store <= D){
			D = D - cake[i].store;
			ans = ans + cake[i].sell;
		}
		else{
			ans = ans + (cake[i].price * D);
			break;
		}
	}
	cout<<fixed<<setprecision(2)<<ans<<endl;

    return 0;
}