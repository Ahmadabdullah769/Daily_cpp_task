//Write a program using while loop that takes an integer for variable x and returns the sum of all the numbers from 1 to x
#include <iostream>
using namespace std;
int main() 
{
	int x,sum=0;
	cout<<"Enter value of x"<<endl;
	cin>>x;
	for(int i = 1;i<=x;i++){
		sum=sum+i;
	}
	cout<<sum;
    return 0;
}