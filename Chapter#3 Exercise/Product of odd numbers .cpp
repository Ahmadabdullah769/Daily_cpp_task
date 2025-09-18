/*write a program using for loop that prints product of all odd numbers from 1 to 10.
 start
 int x
 print " the product of odd numbers from 1 to 10 : "
 for(x = 1,x<=10,x++)
 cout<<
 */
#include <iostream>
using namespace std;
int main() 
{
	int product =1;
	for(int i = 1;i<=10;i++){
	if(i%2!=0){
	product=product*i;
}
}
    cout<<product<<endl;
    return 0;
}