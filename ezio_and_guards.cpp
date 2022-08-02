// Ezio can manipulate at most X number of guards with the apple of eden.
// Given that there are Y number of guards, predict if he can safely manipulate all of them.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y<=x){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
