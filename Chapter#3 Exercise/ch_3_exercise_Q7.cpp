/*Write a cpp program to find
out maximum value out of four
integer using conditional operators*/
#include<iostream>
 #include<string>
 using namespace std;
 int main()
 {
    int a,b,c,d;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter value of c"<<endl;
    cin>>c;
    cout<<"Enter value of d"<<endl;
    cin>>d;
    // condition? exp1:exp2;
    int max1= (a>b)?a:b;
    int max2 =(c>d)?c:d; 
    int max = (max1>max2)?max1:max2;
    
    cout<<"Maxium integer : "<<max;
}


/*
int max
if(a>b){
if()
else
}
if(c>d){
if(){

}else
}
else
*/