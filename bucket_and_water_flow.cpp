// Alice has a bucket of water initially having WW litres of water in it.
// The maximum capacity of the bucket is X liters.
// Alice turned on the tap and the water starts flowing into the bucket at a rate of Y litres/hour.
// She left the tap running for exactly Z hours.
// Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.


#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w+y*z>x){
            cout<<"overflow\n";
        }else if(w+y*z==x){
            cout<<"filled\n";
        }else{
            cout<<"unfilled\n";
        }
    }
    return 0;
}