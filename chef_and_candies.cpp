// There are N children and Chef wants to give them 11 candy each.
// Chef already has X candies with him.
// To buy the rest, he visits a candy shop.
// In the shop, packets containing exactly 4 candies are available.
// Determine the minimum number of candy packets Chef must buy
// so that he is able to give 1 candy to each of the N children.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n!=x && x<n){
	        int y=(n-x)%4;
	        int z=(n-x)/4;
	        if(y==0){
	            cout<<z<<endl;
	        }else{
	            cout<<z+1<<endl;
	        }
	    }else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
