#include <iostream>
using namespace std;
int main(){
    int x, y, sum;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;
    int i=1;
   for( i<=x; x%i==0; i++ ){
     if( y%i==0 && i<=y ){
        sum=i;
     }
     
    }
    
   cout<<sum<<endl;
    return 0;
}					
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,gcd,lcm,t,b,a;
//     cout<<"Enter two integers\n";
//     cin>>x;
//     cin>>y;
//     a = x;
//     b = y;
//     while(b!=0)
//     {
//         t = b;
//         b = a%b;
//         a = t;
//     }
//     gcd = a;
//     lcm = (x*y)/gcd;
//     cout << "GCD is "<<gcd<<" and LCM is "<<lcm<<"\n";
//     return 0;
// }