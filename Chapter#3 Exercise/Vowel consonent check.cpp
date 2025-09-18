//write a C++ program to input a character from the keyboard and display after testing whether its a vowel or consonant.
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		cout<<"The character is Vowel."<<endl;
	}
	else{
		cout<<"The character is consonent.";
	}
    return 0;
}