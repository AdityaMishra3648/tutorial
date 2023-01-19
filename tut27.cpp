#include <iostream>
using namespace std;
int main(){
    int a, sum, bum;
    cout<<"Input your number "<<endl;
    cin>>a;
    sum=0;
    bum=0;
  while(a!=0){
   if((a%10)%2==0){
    sum=sum+a%10;

   }
   else{
    bum=bum+a%10;
   }
    a=a/10;

  }
  cout<<"Sum of Even digits "<<sum<<endl;
  cout<<"Sum of Odd digits "<<bum<<endl;
    return 0;
}