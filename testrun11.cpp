#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int marks[4] = {34, 78, 45, 89};
    i = 0;

    do{
        cout<<"the value of "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i < 4);
    return 0;
}