#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int K,cal[100],key[100],keynum[100],count=0;
	cin>>K;
	for(int i=0;i<K;i++){
		cin>>cal[i];
	}
	for(int i=0;i<K;i++){
		int temp=cal[i];
		while(temp!=1){
			if(temp%2==0){
				temp=temp/2;
				if(temp!=1){
					for(int j=0;j<K;j++){
						if(temp==cal[j]){
							key[j]=1;
						}
					}
				}
			}
			else{
				temp=(3*temp+1)/2;
				if(temp!=1){
					for(int j=0;j<K;j++){
						if(temp==cal[j]){
							key[j]=1;
						}
					}
				}
			}
		}
	}
	for(int i=0;i<K;i++){
		if(key[i]!=1){
			keynum[count]=cal[i];
			count++;
		}
	}
	sort(keynum,keynum+count);
	while(count-1>0){
		cout<<keynum[count-1]<<" ";
		count--;
	}
	cout<<keynum[0]<<endl;
    return 0;
}