#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int N, D;
	double e;
	cin>>N>>e>>D;
	int may=0,is=0;
	for(int i=0; i<N; i++){
		int d;
		cin>>d;
		int count=0;
		for(int j=0; j<d; j++){
			double ex;
			cin>>ex;
			if(ex<e){
				count++;
			}
		}
		if(count>d/2){
			if(d>D){
				is++;
			}
			else{
				may++;
			}
		}
	} 
	cout<<fixed<<setprecision(1)<<may*100.0/N<<"% "<<fixed<<setprecision(1)<<is*100.0/N<<"%"<<endl;
	return 0;
}