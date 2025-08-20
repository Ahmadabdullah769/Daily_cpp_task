#include<iostream>
using namespace std;
int main()
{
	int a=4;
	int b=7;
	bool results;
	results=(a>7)&&(b==7);
	cout<<results<<endl;
	results=(a>7)||(b==7);
	cout<<results<<endl;
	return 0;
}
