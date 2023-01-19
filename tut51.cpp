#include <iostream>
using namespace std;
void print(int *n){
    cout<<*n;
}

int main(){
    int a, *aprt;
    cin>>a;
    aprt=&a;
    print(aprt);

    return 0;
}