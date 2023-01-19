#include<iostream>
using namespace std;

struct employee
{
      int eId;
      char favChar;
      float salary;

};

int main(){
    struct employee rebel;
    rebel.eId = 1;
    rebel.favChar = 'c';
    rebel.salary = 140000;
    
    cout<<"the value is "<<rebel.eId<<endl;
    cout<<"the value is "<<rebel.favChar<<endl;
    cout<<"the value is "<<rebel.salary<<endl;

    
    return 0;
}