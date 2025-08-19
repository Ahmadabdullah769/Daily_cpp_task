//setw manipulator program
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x1=2,x2=4,x3=6;
	cout<<setw(8)<<"Number"<<setw(20)<<"Square"<<endl;
	cout<<setw(8)<<"2"<<setw(20)<<x1*x1<<endl;
	cout<<setw(8)<<"4"<<setw(20)<<x2*x2<<endl;
	cout<<setw(8)<<"6"<<setw(20)<<x3*x3<<endl;
	return 0;
}
