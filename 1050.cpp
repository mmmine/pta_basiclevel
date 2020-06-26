#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int N,m,n;
	cin>>N;
	int a[N];
	for(int i=0; i<N; i++){
		cin>>a[i];
	}
	sort(a, a+N);
	for(n=(int)sqrt(N); n>=0; n--){
		if(N%n==0){
			m=N/n;
			break;
		}
	}
	int result[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			result[i][j]=0;
		}
	}
	int direction[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int direct=0,i=0,j=-1;
    for(int k=N-1;k>=0;--k){
        int ii=i+direction[direct%4][0],jj=j+direction[direct%4][1];
        if(ii<0||ii>=m||jj<0||jj>=n||result[ii][jj]!=0){
            direct+=1;
        }
        i+=direction[direct%4][0];
        j+=direction[direct%4][1];
        result[i][j]=a[k];
    }
    for(i=0; i<m; i++){
    	for(j=0; j<n; j++){
    		if(j>0){
    			cout<<" ";
    		}
    		cout<<result[i][j];
    	}
    	cout<<endl;
    }
	return 0;
}