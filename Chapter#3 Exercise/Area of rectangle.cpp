//write a C++ program to find out area of rectangle , if any side is zero then display the message there is no triangle.
#include <string>
#include<iostream>
using namespace std;
int main() 
{
    float length;
    float width;
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter width"<<endl;
    cin>>width;
    if(length==0||width==0){
    	cout<<"There is no triangle"<<endl;
	}
	else{
		cout<<"Area of rectangle is : "<<length*width<<endl;
	}
    return 0;
}