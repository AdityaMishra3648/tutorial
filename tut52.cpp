#include <iostream>
using namespace std;
void check(int *a,int *b,int *c,int *sum){
    if(*a>*b){
        if(a>c){
            *sum=*a;

        }
        else{
            *sum=*c;
        }
    }
    else{
         if(b>c){
            *sum=*b;

        }
        else{
            *sum=*c;
        }
    }


}



int main(){
   int *yo;
   int n=0;
   yo=&n;
   int a, b, c, *aptr, *bptr, *cptr;

   cout<<"Enter three numbers "<<endl;
   cin>>a>>b>>c;
   aptr=&a;
   bptr=&b;
   cptr=&c;

   check(aptr, bptr, cptr, yo);
    cout<<"The greatest number amoung them is "<<*yo<<".";


    return 0;
}