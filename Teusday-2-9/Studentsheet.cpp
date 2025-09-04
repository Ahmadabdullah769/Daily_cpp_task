#include<iostream>
using namespace std;
int main()
{
	int marks;
	int totalstudents;
	cout<<"Enter number of students : "<<endl;
	cin>>totalstudents;
	for(int students=1; students<=totalstudents; students++){
		cout<<"Enter marks of students"<<students<<":"<<endl;
		cin>>marks;
	if(marks>=50){
		cout<<" Students "<<students<<" has passed"<<endl;
	}else{
		cout<<" Students "<<students<<"has failed"<<endl;
	}
}
	return 0;
}
