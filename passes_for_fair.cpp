// There is a fair going on in Chefland.
// Chef wants to visit the fair along with his N friends. 
// Chef manages to collect K passes for the fair.
// Will Chef be able to enter the fair with all his N friends?
// A person can enter the fair using one pass, and each pass can be used by only one person.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(k>n){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
