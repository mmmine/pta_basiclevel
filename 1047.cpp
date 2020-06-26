#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	int n;
	cin>>n;
	int score[1001] = {0};
	string id,teamid="";
	int grade,team,bestteam,bestgrade=0;
	for(int i=0; i<n; i++){
		cin>>id>>grade;
		for(int j=0; id[j]!='-'; j++){
			teamid += id[j];
		}
		team = stoi(teamid);
		score[team] += grade;
		teamid = "";
	}
	for(int i=0; i<1001; i++){
		if(score[i]>bestgrade){
			bestgrade = score[i];
			bestteam = i;
		}
	}
	cout<<bestteam<<" "<<bestgrade<<endl;
	return 0;
}