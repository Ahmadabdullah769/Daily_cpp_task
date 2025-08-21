#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	double marks;
	cout<<"Enter your marks : "<<endl;
	cin>>marks;
	string results;
	results=(marks>=40)?"Pass":"Fail";
	cout<<"Your results is : "<<results<<endl;
	return 0;
}