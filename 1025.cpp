#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	int head,n,k;
	cin>>head>>n>>k;
	int address;
	int data[100001],next[100001];
	for(int i=0; i<n; i++){
		cin>>address;
		cin>>data[address]>>next[address];
	}
	vector<int>list;
	while(head != -1){
		list.push_back(head);
		head = next[head];
	}
	for(int i=k;i<=list.size();i=i+k){
		reverse(list.begin()+i-k,list.begin()+i);
	}
	for(int i=0;i<list.size()-1;i++){
		cout<<setw(5)<<setfill('0')<<list[i]<<" "<<data[list[i]]<<" "<<setw(5)<<setfill('0')<<list[i+1]<<endl;
	}
	cout<<setw(5)<<setfill('0')<<list.back()<<" "<<data[list.back()]<<" "<<"-1"<<endl;
	return 0;
}