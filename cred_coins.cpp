// For each bill you pay using CRED, you earn X CRED coins.
// At CodeChef store, each bag is worth 100 CRED coins.
// Chef pays Y number of bills using CRED.
// Find the maximum number of bags he can get from the CodeChef store.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int cred=y*x;
	    cout<<cred/100<<endl;
	}
	return 0;
}
