#include <iostream>
using namespace std;
int taxcalculator(int z, int y){
while(y>=100000){
//    int z=x;
   z=z-y;
   if (z<=100000)
   {
    return 0;
   }
   else if(z>=100000 && z<=200000)
     {
        return (z-100000)*1/10;
     }
    else if(z>=200000 && z<=500000)
     {
        return (100000*1/10)+((z-200000)*2/10);
     }
    else if(z>=500000)
     {
        return (100000*1/10) + (300000*2/10) + ((z-500000)*3/10);
     }


}

}


int main(){
    int x, y;
    cout<<"Enter your gross salary "<<endl;
    cin>>x;
    cout<<"Enter your total savings "<<endl;
    cin>>y;
    cout<<"Your total payable tax is RS "<<taxcalculator(x,y)<<endl;



    return 0;
} 