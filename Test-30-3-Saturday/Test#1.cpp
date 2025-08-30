#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	int marks;
	int bonus;
	bool hasID;
	string grade;
	
	cout<<"Enter your age : "<<endl;
	cin>>age;
	cout<<"Enter your marks : "<<endl;
	cin>>marks;
	cout<<"Do you have ID (only enter 0 and 1): "<<endl;
	cin>>hasID;
	age++;
	cout<<"Your age is : "<<age<<endl;
	marks--;
	cout<<"Your marks are : "<<marks<<endl;
	bonus=age+marks;
	cout<<"Your bonus is : "<<bonus<<endl;
	if(age>=18&&hasID ||marks>50)
	{
		cout<<"You are eligible"<<endl;
	}
	else
	{
		cout<<"You are not eligible"<<endl;
	}
    grade=(marks>=90)?"A":(marks>=60)?"B":"C";
    cout<<"Final grade is : "<<grade<<endl;
    cout<<"Bonus score : "<<bonus<<endl;
	return 0;
}