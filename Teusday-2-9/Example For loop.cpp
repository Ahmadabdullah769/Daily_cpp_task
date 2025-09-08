#include<iostream>
using namespace std;
int main()
{
	int price;
	for(int i=0;i<5;i--){
	cout<<"Enter price of item"<<i<<":"<<endl;
	cin>>price;
	cout<<"The price of item"<<i<<"is : "<<price<<endl;
    }
    return 0;
}