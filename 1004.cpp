#include <iostream>
#include <string>
using namespace std;

class Student{
public:
	string name;
	string number;
	int score;
	Student(int s=0):score(s){}
};

int main(){
	int n;
	cin>>n;
	Student Max(-1),Min(101),temp;
	for(int i=0;i<n;i++){
		cin>>temp.name>>temp.number>>temp.score;
		if(Max.score<temp.score)
            Max=temp;
        if(Min.score>temp.score)
            Min=temp;
    }
    cout<<Max.name<<" "<<Max.number<<endl;
    cout<<Min.name<<" "<<Min.number<<endl;
    return 0;
}