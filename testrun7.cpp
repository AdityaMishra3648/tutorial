#include<iostream>
using namespace std;

int main(){
    // cout<<"this is a testrun";
    int age;
    cout<<"tell me your age for beer party"<<endl;
    cin>>age;
    if(age<18){
        cout<<"abhi bacche ho baad me aana"<<endl;
    }
    else if(age==18){
        cout<<"naye naye jawan huye ho thoda sabar karo"<<endl;
    }
    else{
        cout<<"sahi hai lounde tum aa sakte ho "<<endl;
    }

    return 0;
}