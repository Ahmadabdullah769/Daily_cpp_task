#include<iostream>
using namespace std;
int main()
{
	int marks[3];
//	cout<<"Enter first subject marks : "<<endl;
//	cin>>marks[0];
//	cout<<"Enter first subject marks : "<<endl;
//	cin>>marks[1];
//	cout<<"Enter first subject marks : "<<endl;
//	cin>>marks[2];
//	cout<<"Enter first subject marks : "<<endl;
//	cin>>marks[3];
//	cout<<"Enter first subject marks : "<<endl;
//	cin>>marks[4];
	for(int i=0;i<3;i++){
		cout<<"Enter "<<i<<" subject marks :"<<endl;
		cin>>marks[i];
		
		//cout<<"Your subject no. are "<<i<<marks[i]<<endl;
	}
	
	for(int j=0;j<3;j++){
			
		cout<<"Your subject no. "<<j<<" is "<<marks[j]<<endl;
	}
	
	
	return 0;
}