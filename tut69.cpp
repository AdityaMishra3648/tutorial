#include<iostream>
using namespace std;
int main(){
   int n, sum=0;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
     cin>>arr[i];

   }
   while(sum<n-1){
      for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
         int temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
          
        }
      
   }
   sum++;
   }
   cout<<"the largest element of the given array is "<<arr[n-1]<<endl;
   cout<<"the samllest element of the given array is "<<arr[0]<<endl;
   
   



    return 0;
}