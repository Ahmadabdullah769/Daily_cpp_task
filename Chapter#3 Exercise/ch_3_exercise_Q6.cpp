/*Write a cpp program to get five subject marks 
 of a student and then then calculate the total,
 average and percentage and display them on the screen.*/
 #include<iostream>
 #include<string>
 using namespace std;
 int main()
 {
    int marks;
    int total;
    float average;
    float percentage;
    int Maths;
    int Urdu;
    int Arts;
    int Science;
    int English;
    cout<<"Enter Urdu marks"<<endl;
    cin>>Urdu;
    cout<<"Enter Maths marks"<<endl;
    cin>>Maths;
    cout<<"Enter Arts marks"<<endl;
    cin>>Arts;
    cout<<"Enter Science marks"<<endl;
    cin>>Science;
    cout<<"Enter English marks"<<endl;
    cin>>English;
    average=(Maths+Urdu+Arts+Science+English)/5;
    cout<<average;
    
    return 0;
}