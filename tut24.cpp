// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";

//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
      
    
         for(int t=100; t<=500; t++){
         int sum=0;
         int i=t;
         while(i!=0){
         sum=sum+((i%10)*(i%10)*(i%10));
         i = i/10;
         }
         if(sum == i){
        cout<<i;
      }
      
      }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=100;i<500;i++)
//     {
//         int sum = 0;
//         int t = i;
//         while(t!=0)
//         {
//             sum = sum+((t%10)*(t%10)*(t%10));
//             t = t/10;
//         }
//         if(sum == i)
//         {
//             cout << i <<"\n";
//         }
//     }
//     return 0;
// }
