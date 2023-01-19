#include <iostream>
using namespace std;

    
int sum(int num1 , int num2){
    int add = num1 + num2;
    return add;
}

int main(){
     int a, b;
     cout<<"enter two numbers"<<endl;
     cin>>a>>b;
     cout<<"the sum is "<<sum(a,b);
    


    return 0;
}
