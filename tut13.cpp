#include <iostream>
using namespace std;
int main(){
  int n, sum;
  sum=1;
  cin>>n;
  if(n==0){
    cout<<"0";
  }
  else
  {for(int i=1; i<=n; i++){
    if(i==0){
        cout<<"0";
        break;
    }
    sum=sum*i;
  }

  cout<<sum;}
    return 0;
}