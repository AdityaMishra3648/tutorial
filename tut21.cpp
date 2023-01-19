#include <iostream>
using namespace std;
int main(){
      int i, sum;
      sum=0;
      for(int i=100; i<=500; i++){
         
         while(i!=0){
         sum=(sum+(i%10*(i%10*(i%10))));
         i/10;
         }
         if(sum==i){
        cout<<i;
      }
      
      }
    return 0;
}