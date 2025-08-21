#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int score;
	cout<<"Enter your Marks :"<<endl;
	cin>>score;
	string grade;
	grade=(score>=90)?"A+" :(score>=80)?"A" :(score>=70)?"B" :(score>=60)?"C" :(score>=50)?"D" : "F";
	cout<<grade;
	return 0;
}