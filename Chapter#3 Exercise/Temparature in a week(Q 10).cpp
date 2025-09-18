//write a C++ program to read the temparature of all week in an array and then find the hottest day of the week.
#include<iostream>
using namespace std;
int main()
{
	int temp[7];
    for(int i=0;i<7;i++){
    	cout<<"day "<<i<<endl;
    	cin>>temp[i];
	}
	int max=temp[0];
	int hottestday = 0;
	for(int i=0;i<7;i++){
	if(temp[i]>max){
		max = temp[i];
		hottestday = i;
	}	
	}
	cout<<"The hottest day was  day "<<(hottestday)<<" with temperature "<<max<<" C"<<endl;
	return 0;
}