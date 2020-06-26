#include <iostream>
using namespace std;

int change(char g){
	if(g == 'B')
		return 0;
	if(g == 'C')
		return 1;
	else
		return 2;
}

int main(){
	int n;
	char Gesture[3] = {'B','C','J'};
	cin>>n;
	char ca,cb;
	int ka,kb,wa=0,wb=0;
	int TimesA[3] = {0},TimesB[3] = {0};
	int WinA[3] = {0},WinB[3] = {0};
	for(int i=0;i<n;i++){
		cin>>ca>>cb;
		ka = change(ca);
		kb = change(cb);
		if((ka+1) % 3 == kb){
			TimesA[0]++;
			TimesB[2]++;
			WinA[ka]++;
		}
		else if(ka == kb){
			TimesA[1]++;
			TimesB[1]++;
		}
		else{
			TimesA[2]++;
			TimesB[0]++;
			WinB[kb]++;
		}
	}
	cout<<TimesA[0]<<" "<<TimesA[1]<<" "<<TimesA[2]<<endl;
	cout<<TimesB[0]<<" "<<TimesB[1]<<" "<<TimesB[2]<<endl;
	for(int i=0;i<3;i++){
		if(WinA[i] > WinA[wa]){
			wa = i;
		}
		if(WinB[i] > WinB[wb]){
			wb = i;
		}
	}
	cout<<Gesture[wa]<<" "<<Gesture[wb]<<endl;
    return 0;
}