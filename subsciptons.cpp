// A new TV streaming service was recently started in Chefland called the Chef-TV.
// A group of N friends in Chefland want to buy Chef-TV subscriptions.
// We know that 6 people can share one Chef-TV subscription.
// Also, the cost of one Chef-TV subscription is X rupees.
// Determine the minimum total cost that the group of N friends will incur
// so that everyone in the group is able to use Chef-TV.

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n%6==0){
            cout<<n*x/6<<endl;
        }else{
            cout<<((n/6)+1)*x<<endl;
        }
    }
    return 0;
}