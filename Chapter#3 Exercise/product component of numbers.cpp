/*Write a program that displays the product components of a number without repeating them.For example , if the users enters 24 , it displays 
24*1,12*2,8*3 and6*4 */
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
	int x;
	cout<<"Enter a number "<<endl;
	cin>>x;
	for(int i=1;i<=sqrt(x);i++){
		if(x %i==0){
			int pair= x / i;
			cout << pair <<"*"<<i<<endl;
		}
	}
    return 0;
}