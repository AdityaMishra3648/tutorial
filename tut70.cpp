#include <iostream>
using namespace std;
int main(){
 int n, sum=0, y=0;
 cout<<"Enter the size of your array "<<endl;


 
 cin>>n;
 int arr[n], art[n];
 cout<<"Enter the value of your array"<<endl;
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 cout<<"Enter elements of second array"<<endl;

  for(int i=0; i<n; i++){
    cin>>art[i];
 }
 while(y<n-1){
  for(int i=0; i<n-1; i++){
    if(arr[i]>arr[i+1]){
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
      if(art[i]>art[i+1]){
      int pemp=art[i];
      art[i]=art[i+1];
      art[i+1]=pemp;
    }
 }
 y++;
 }
    for(int i=0; i<n; i++){
    if(arr[i]!=art[i]){
      sum=1;
    }
 }
  if (sum==1)
  {
   cout<<"both arrays are not equal"<<endl;
  }
  else{
    cout<<"both arrays are equal"<<endl;
  }
   
   

    return 0;
}