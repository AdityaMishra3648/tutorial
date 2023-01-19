#include <iostream>
using namespace std;
int main(){
     int n, sum;
     cout<<"Enter your number"<<endl;
     cin>>n;
     sum=0;
     while(n != 0){
     sum=sum+n%10;
     n=n/10;
     

     }
      cout<<"the sum is "<<sum;

     

    return 0;
}