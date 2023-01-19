#include <iostream>
using namespace std;
int main(){
     int m, sum=0, js=0, mota=0;
     cout<<"Enter the row and columns number of your matrix respectively"<<endl;
     cin>>m;
     int arr[m][m];
     
     for(int i=0; i<m; i++){
      cout<<"Enter the elements of row number "<<i<<endl;

       for(int j=0; j<m; j++){
         cin>>arr[i][j];
       }
     } 
     cout<<"your entered matrix is... "<<endl;
          for(int i=0; i<m; i++){
       for(int j=0; j<m; j++){
        // if(j>js)
        // {
        //     continue;
        // }
        //  sum=sum+arr[i][j+js];
        //  js++;
        cout<<arr[i][j]<<" ";
         
       }
       cout<<endl;
     } 

     for(int i=0; i<m; i++){
      sum=sum+arr[i][i];
     }
      while(mota<m){
     for(int i=m-1; i>=0; i--){
      // for(int j=0; j<m; j++){}
        
      js=js+arr[i][mota];
      mota++;
      
     }}



     cout<<"sum of the left diagonal of the matrix is "<<sum<<endl;
     cout<<"and the sum of the right diagonal of the matrix is "<<js<<endl;;

    return 0;
}