// Chef's phone shows a Battery Low notification if the battery level is 15% or less.
// Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.


#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=15){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}