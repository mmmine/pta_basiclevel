#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int *a = new int[1001];
	int n;
	int count0 = 0,count1 = 0,max4 = 0;
	int amount0 = 0,amount1 = 0,amount2 = 0,amount4 = 0;
	float count3 = 0,amount3 = 0;
	int flag = 0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		switch(a[j]%5){
			case 0:
				if(a[j]%2 == 0){
					amount0++;
					count0 = count0 + a[j];
				}
				break;
			case 1:
				amount1++;
				if(flag == 0){
					count1 = count1 + a[j];
					flag = 1;
				}
				else{
					count1 = count1 - a[j];
					flag = 0;
				}
				break;
			case 2:
				amount2++;
				break;
			case 3:
				amount3++;
				count3 = count3 + a[j];
				break;
			case 4:
				amount4++;
				if(max4 < a[j]){
					max4 = a[j];
				}
				break;
		}
	}
	if(amount0){
		cout<<count0<<" ";
	}
	else cout<<"N ";
	if(amount1){
		cout<<count1<<" ";
	}
	else cout<<"N ";
	if(amount2){
		cout<<amount2<<" ";
	} 
	else cout<<"N ";
	if(amount3){
		float avg = count3/amount3;
		cout<<setiosflags(ios_base::fixed)<<setprecision(1)<<avg<<" ";
	}
	else cout<<"N ";
	if(amount4){
		cout<<max4<<endl;
	}
	else cout<<"N"<<endl;
    return 0;
}