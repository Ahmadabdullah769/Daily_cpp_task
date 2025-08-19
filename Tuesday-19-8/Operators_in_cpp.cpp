//Operators in C++
#include<iostream>
using namespace std;
int main()
{
	int VarA, VarB;
	VarA=100;
	VarB=400;
	cout<<"VarA:"<<VarA;
	cout<<endl;
	cout<<"VarB:"<<VarB;
	cout<<"Assignment Operator"<<endl;

 
 

	int a=11,b=5;
	int sum=a+b;
	int difference=a-b;
	int product=a*b;;
	float division=a/b;
	int remainder=a%b;
	cout<<"sum="<<sum<<endl;
	cout<<"difference="<<difference<<endl;
	cout<<"product="<<product<<endl;
	cout<<"division="<<division<<endl;
	cout<<"remainder="<<remainder<<endl;
	cout<<"Arthimetic Operator"<<endl;




	int VarC,VarD=100;
	VarC+=VarD;
	VarC+=200;//equivalent to VarC=VarC+200
	cout<<"Value after addition="<<VarC;
	cout<<"Compound Operators"<<endl;
	return 0;
}