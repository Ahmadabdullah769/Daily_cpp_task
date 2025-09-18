#include<iostream>
#include<string>
using namespace std;
int main()
{
	string grocery[100];
//	grocery[0] = "Milk";
//    grocery[1] = "Eggs";
//    grocery[2] = "Bread";
//    grocery[3] = "Apples";
//    grocery[4] = "Rice";
    for(int i=0;i<100;i++){
//    	grocery[2]="Butter";
	cout<<"Enter grocery no. "<<i<<" or enter dot(.) to exit"<<endl;
	cin>>grocery[i];
	
	if(grocery[i]=="Milk"){
		grocery[2]="Butter";
	}
    	cout<<grocery[i]<<endl;
    if(grocery[i]=="."){
    	i=100;
	}	
	}
	
	return 0;
}