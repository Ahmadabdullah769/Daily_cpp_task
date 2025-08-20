#include<iostream>
using namespace std;
int main()
{
	
	int VarX=1;
	int VarY=1;
	int VarZ=1;
	VarX++;
	VarY+=1;
	VarZ=VarZ+1;
	cout<<"Value of VarX : "<<VarX<<endl;
	cout<<"Value of VarY : "<<VarY<<endl;
	cout<<"Value of VarZ : "<<VarZ<<endl;
	VarX--;
	cout<<"Value of VarX : "<<VarX<<endl;//prefix
	--VarX;
	cout<<"Value of VarX : "<<VarX<<endl;//Postfix
	return 0;
}