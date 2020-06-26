#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student{
	int ExamCardNum;
	int MoralGrade;
	int TalentGrade;
	int tag;
};

bool cmp(student a, student b){
	if(a.tag < b.tag){
		return true;
	}
	else if(a.tag > b.tag){
		return false;
	}
	else if(a.tag == b.tag){
		if(a.MoralGrade+a.TalentGrade > b.MoralGrade+b.TalentGrade){
			return true;
		}
		else if(a.MoralGrade+a.TalentGrade < b.MoralGrade+b.TalentGrade){
			return false;
		}
		else{
			if(a.MoralGrade > b.MoralGrade){
				return true;
			}
			else if(a.MoralGrade < b.MoralGrade){
				return false;
			}
			else{
				if(a.ExamCardNum > b.ExamCardNum){
					return false;
				}
				else return true;
			}
		}
	}
}

int main(){
	int N, L, H, count = 0;
	cin>>N>>L>>H;
	student *s = new student[N];
	for(int i=0; i<N; i++){
		cin>>s[i].ExamCardNum>>s[i].MoralGrade>>s[i].TalentGrade;
		if(s[i].MoralGrade>=L && s[i].TalentGrade>=L){
			count++;
			if(s[i].MoralGrade>=H && s[i].TalentGrade>=H){
				s[i].tag = 1;
			}
			else if(s[i].MoralGrade>=H && s[i].TalentGrade<H){
				s[i].tag = 2;
			}
			else if(s[i].MoralGrade<H && s[i].TalentGrade<H && s[i].MoralGrade>=s[i].TalentGrade){
				s[i].tag =3;
			}
			else{
				s[i].tag = 4;
			}
		}
		else{
			s[i].tag = 5;
		}
	}
	sort(s, s+N, cmp);
	if(count >= 1){
		cout<<count<<endl;
		for(int j=0;j<count-1;j++){
			cout<<s[j].ExamCardNum<<" "<<s[j].MoralGrade<<" "<<s[j].TalentGrade<<endl;
		}
		cout<<s[count-1].ExamCardNum<<" "<<s[count-1].MoralGrade<<" "<<s[count-1].TalentGrade;
	}
	else cout<<count;
	delete[] s;
	return 0;
}