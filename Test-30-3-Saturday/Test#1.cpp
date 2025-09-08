#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int secretNumber = rand() % 10 + 1;
	int guess;
	bool won = false;
	
	cout<<"Welcome to the Guessing Game ! "<<endl;
	cout<<"You have the 3 chances to guess the number (1-10)."<<endl;
	
	cin>>guess;
	if(guess == secretNumber){
		cout<<"Correct! You win !"<<endl;
	} else{
		cin>>guess;
	    if (guess == secretNumber){
		   cout<<"Correct! You win!"<<endl;
	    }else{
		  cin>>guess;
	      if(guess == secretNumber){
		    cout<<"Correct! You win!"<<endl;
	      }else{
		     cout<<"Sorry, You lost! The Number was "<<secretNumber<<endl;
        	}
        }
    }
	cout<<"Game Over"<<endl;		  
	return 0;
}