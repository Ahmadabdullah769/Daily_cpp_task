//write a C++ program to input a character from the keyboard and display after testing whether its a vowel or consonant.
#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
	char ch;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	switch(ch)
	{
		case'a':
			cout<<"The character is Vowel."<<endl;
			break;
			case'e':
			cout<<"The character is Vowel."<<endl;
			break;
			case'i':
			cout<<"The character is Vowel."<<endl;
			break;
			case'o':
			cout<<"The character is Vowel."<<endl;
			break;
			case'u':
			cout<<"The character is Vowel."<<endl;
			break;
			case'A':
			cout<<"The character is Vowel."<<endl;
			break;
			case'E':
			cout<<"The character is Vowel."<<endl;
			break;
			case'I':
			cout<<"The character is Vowel."<<endl;
			break;
			case'O':
			cout<<"The character is Vowel."<<endl;
			break;
			case'U':
			cout<<"The character is Vowel."<<endl;
			break;
			default:
				cout<<"The character is Consonent"<<endl;
	}
    return 0;
}