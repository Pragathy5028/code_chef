// To access CRED programs, one needs to have a credit score of 750 or more.
// Given that the present credit score is X, determine if one can access CRED programs or not.
// If it is possible to access CRED programs, output YES, otherwise output NO.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x>=750){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
	return 0;
}
