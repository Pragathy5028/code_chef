// Bob has X rupees and goes to a market.
// The cost of apples is Rs. A per kg and the cost of oranges is Rs. B per kg.
// Determine whether he can buy at least 11 kg each of apples and oranges.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int a,b;
	cin>>a>>b;
	if(a+b<=x){
	    cout<<"Yes\n";
	}
	else{
	    cout<<"no\n";
	}
	return 0;
}
