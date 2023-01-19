#include <iostream>
using namespace std;
int main(){
    int n, sum, multi, x;
    char chr;
    n=0;
    sum=0;
    multi=1;
    for(int i=0; i>=0 ; i++){
       cout<<"Enter the input"<<endl;
       cin>>x;
       n=n+x;
       sum=sum+1;
       multi=multi*x;
       cout<<"input any number or digit to continue or q to quit"<<endl;
       cin>>chr;
       if(chr=='q'){
        break;
       }
       

    }
    cout<<"Average of all numbers "<<n/sum<<endl;
    cout<<"Product of all numbers "<<multi<<endl;


    return 0;
}