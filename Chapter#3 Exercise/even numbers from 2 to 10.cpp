//write a program that prints product of all even number from 2 to 10.
#include<iostream>
using namespace std;
int main()
{
	int x=1;
	for(int i =2;i <=10;i++){
    if(i%2==0){
    	
    x=x*i;
    cout<<"x * i ="<<x<<endl;
    }
    
}
    cout<<"Value of x :"<<x<<endl;
    return 0;
}