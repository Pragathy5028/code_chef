// There are only 2 type of denominations in Chefland:
// Coins worth 1 rupee each
// Notes worth 10 rupees each
// Chef wants to pay his friend exactly X rupees.
// What is the minimum number of coins Chef needs to pay exactly X rupees?

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%10!=0){
	        cout<<x%10<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
