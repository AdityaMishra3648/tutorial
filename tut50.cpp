#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
int *ptr=&a;
int **aptr=&ptr;
cout<<&a<<endl;
cout<<aptr<<endl;

    return 0;
}