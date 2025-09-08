#include<iostream>
using namespace std;
int main()
{
	int X;
	cout<<"Enter your number"<<endl;
	cin>>X;
	switch(X)
	{
	case(X>100):
		cout<<"is greator than 100"<<endl;
	break;
	case(X>50&&X<100):
		cout<<"is between 50 and 100"<<endl;
	break;
	default:
		cout<<"is less than 50"<<endl;
	}
	return 0;
}