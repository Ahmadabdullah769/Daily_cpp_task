#include<iostream>
using namespace std;
int main()
{
	int Z;
	cout<<"Enter your number"<<endl;
	cin>>Z;
	if(Z>50)
	{
		if(Z>100)
		cout<<Z<<" is greater than 100"<<endl;
		else
		{
			cout<<Z<<" is between 50 and 100"<<endl;
		}
	}
		else
		cout<<Z<<" is less than 50"<<endl;
	return 0;
}