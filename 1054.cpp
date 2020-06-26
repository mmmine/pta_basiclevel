#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	int N;
	cin>>N;
	double sum=0;
	int k=0;
	char str[50], num[50];
	while(N--){
		cin>>str;
		double number=0;
		sscanf(str, "%lf", &number);
		sprintf(num, "%.2f", number);
		bool flag=true;
		for(int i=0; str[i]!='\0'&&flag; i++){
			if(str[i]!=num[i]){
				flag=false;
			}
		}
		if(!flag||number>1000||number<-1000){
			cout<<"ERROR: "<<str<<" is not a legal number"<<endl;
		}
		else{
			k++;
			sum+=number;
		}
	}
	if(k==0){
		cout<<"The average of 0 numbers is Undefined"<<endl;
	}
	else if(k==1){
		cout<<"The average of 1 number is "<<fixed<<setprecision(2)<<sum<<endl;
	}
	else{
		cout<<"The average of "<<k<<" numbers is "<<fixed<<setprecision(2)<<sum/k<<endl;
	}
	return 0;
}