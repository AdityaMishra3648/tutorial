#include <iostream>
using namespace std;
int main(){
    int k, jok;
    cout<<"Enter your number"<<endl;
    cin>>k;
    jok=0;
    for(int i=2; i<=k; ++i){
        int sum;
   sum=0;
       
      for(int n=2; n<i; ++n){
         if(i%n==0){
        sum=1;
        }
        
        

      }
      if(sum==0){
       if(k%i==0){
        cout<<i<<endl;
       }
      }
     
    }
    


    return 0;
}