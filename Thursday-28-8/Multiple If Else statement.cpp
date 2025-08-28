#include<iostream>
#include<string>
using namespace std;
int main()
{
int age;
string nationality;
bool hasCNIC;
cout<<"Enter your age:"<<endl;
cin>>age;

cout<<"Enter your Nationality:"<<endl;
cin>>nationality;


    cout << "Do you have a CNIC? (1 for Yes, 0 for No): ";
    cin >> hasCNIC;

if(age>=18&&nationality=="pakistani"||nationality=="Pakistani"&&hasCNIC)
	cout<< "You are eligible to vote";
else
	cout<<"You are not eligible to vote";	



return 0;
}