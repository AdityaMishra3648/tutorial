#include <iostream>
using namespace std;
int main(){
   
    for(int i=2; i<=100; ++i){
        int sum;
   sum=0;
       
      for(int n=2; n<i; ++n){
         if(i%n==0){
        sum=1;
        }
        
        

      }
      if(sum==0){
        cout<<i<<endl;
      }
     
    }
    

        


    return 0;
}
