// Chef is ordering food online (instead of cooking) and the bill comes out to be Rs.X.
// Chef can use one of the following two coupons to avail a discount.
// Get 10 percent off on the bill amount
// Get a flat discount of Rs. 100 on the bill amount
// What is the maximum discount Chef can avail?


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,maximum;
	    cin>>x;
	    maximum=max((10*x)/100,100);
	    cout<<maximum<<endl;
	}
	return 0;
}
