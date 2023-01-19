#include<iostream>
using namespace std;

int c = 23;

int main(){
    int a, b, c;
    float d=34.4;
    long double e =34.4;

    cout<<"Enter the value of a:"<<endl;
    cin>>a; 
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c = a + b;
      
    cout<<"the value of c is "<<c<<endl; 
    cout<<"the global value of c is "<<::c;  


    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;


    return 0;
}