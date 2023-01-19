#include <iostream>
using namespace std;
int main(){
     int x, y, sum;
     cout<<"Enter numerator "<<endl;
     cin>>x;
     cout<<"Enter denominator "<<endl;
     cin>>y;
     int i=1;
   for( i<=x; x%i==0; i++ ){
     if( y%i==0 && i<=y ){
        sum =i;
     }
     
    }
    x=x/sum;
    y=y/sum;
    cout<<x<<"/"<<y;
      

    return 0;
}