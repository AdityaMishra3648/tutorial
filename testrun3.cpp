#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;

    cout<<"following are the type of operators in c++"<<endl;
    // Arithmatic operators
    
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a -- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    
    //following are the comparison operators
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    
    cout<<"the value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl; // it exactly reverses the correct answer



    return 0;
}