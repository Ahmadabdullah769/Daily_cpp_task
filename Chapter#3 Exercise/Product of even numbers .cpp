//Write a program using for loop that prints product of all even number from 1 to 10.
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
	int x=1;
	cout<<"enter value of x :"<<endl;
	for(int i =1;i <=10;i++){
	if(i%2==0){

	x=x*i;	
	
}
}
    cout<<x;
    return 0;
}
