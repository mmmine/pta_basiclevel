#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string Day;
	int Hour,Min;
	string s1,s2,s3,s4;
	char alp[14] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
	char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
	string s[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin>>s1>>s2>>s3>>s4;
	int i=0,k=0,flag=0,AlpOrNum=0;
	while(s1[i] != '\0' && s2[i] != '\0' && flag <= 1){
		if(s1[i] == s2[i]){
			if(flag == 0){
				for(int j=0;j<14;j++){
					if(s1[i] == alp[j]){
						Day = s[j];
						flag++;
					}
				}
			}
			else if(flag == 1){
				for(int j=0;j<10;j++){
					if(s1[i] == num[j]){
						Hour = j;
						flag++;
						AlpOrNum++;
						break;
					}
				}
				if(AlpOrNum == 0){
					for(int j=0;j<14;j++){
						if(s1[i] == alp[j]){
							Hour = j+10;
							flag++;
							AlpOrNum++;
							break;
						}
					}
				}
			}
		}
		i++;
	}

	while(s3[k] != '\0' &&s4[k] != '\0'){
		if(s3[k] == s4[k]){
			if((s3[k] >= 'a' && s3[k] <= 'z') || (s3[k] >= 'A' && s3[k] <= 'Z')){
				Min = k;
				break;
			}
		}
		k++;
	}

	cout.fill('0');
	cout<<Day<<" "<<setw(2)<<Hour<<":"<<setw(2)<<Min<<endl;

    return 0;
}