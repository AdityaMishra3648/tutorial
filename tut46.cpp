#include <iostream>
using namespace std;



int main(){
    int arr[6], i;
    cout<<"Enter your date of birth in format YYYY MM DD"<<endl;
    for(i=0; i<3; i++){
        cin>>("%d", arr[i]);
        }
        cout<<"Enter todays's date in format YYYY MM DD"<<endl;
    for(i=3; i<6; i++){
        cin>>("%d", arr[i]);
        }
   
     if((arr[4]-arr[1])>=0){
        if ((arr[5]-arr[2])>=0)
        {
       cout<<"You are currently "<<arr[3]-arr[0]<<" Years "<<arr[4]-arr[1]<<" months and "<<arr[5]-arr[2]<<" days old.";
            
        } 
        else{
             cout<<"You are currently "<<arr[3]-arr[0]<<" Years "<<(arr[4]-arr[1])-1<<" months and "<<(arr[5]-arr[2])+30<<" days old.";
        }
     }
     else{
         if ((arr[5]-arr[2])>=0)
        {
       cout<<"You are currently "<<(arr[3]-arr[0])-1<<" Years "<<(arr[4]-arr[1])+12<<" months and "<<arr[5]-arr[2]<<" days old.";
            
        } 
        else{
             cout<<"You are currently "<<(arr[3]-arr[0])-1<<" Years "<<((arr[4]-arr[1])+12)-1<<" months and "<<(arr[5]-arr[2])+30<<" days old.";
        }


     }
     return 0;
}