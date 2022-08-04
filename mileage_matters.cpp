// Chef wants to rent a car to travel to his restaurant which is N kilometers away.
// He can either rent a petrol car or a diesel car.
// One litre of petrol costs X rupees and one litre of diesel costs Y rupees.
// Chef can travel A kilometers with one litre of petrol and B kilometers with one litre of diesel.
// Chef can buy petrol and diesel in any amount, not necessarily integer.
// For example, if X = 95, Chef can buy half a litre of petrol by paying 95/2 = 47.595 rupees.
// Which car should the chef rent in order to minimize the cost of his travel?

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        if(((n/a)*x)==((n/b)*y)){
            cout<<"ANY\n";
        }
        else if(((n/a)*x)<((n/b)*y)){
            cout<<"PETROL\n";
        }
        else{
            cout<<"DIESEL\n";
        }
        
    }
    
    return 0;
}