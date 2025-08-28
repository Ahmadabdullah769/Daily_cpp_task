#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Username = "Abd@123";
	string Password = "1234567";
	string User;
	string Pass;
	string result;
	cout<<"Enter your username "<<endl;
	cin>>User;
	cout<<"Enter your Password"<<endl;
	cin>>Pass;
	result=(User==Username)&&(Pass==Password)?"Login successful":"Login failed!";
	cout<<result<<endl;
	return 0;
}