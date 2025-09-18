/*write a C++ program that takes 3 numbers as input and display rather all numbers are equal or not by using nested if condition*/
#include <iostream>
using namespace std;
int main() 
{
	int x,y,z;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	cout<<"Enter the value of y"<<endl;
	cin>>y;
	cout<<"Enter the value of z"<<endl;
	cin>>z;
	if(x==y)
	{
	if(y==z){
	cout<<"All numbers are equal"<<endl;
}
	else
	cout<<"Numbers are not Equal"<<endl;

}	else
	cout<<"Numbers are not Equal"<<endl;
    return 0;
}