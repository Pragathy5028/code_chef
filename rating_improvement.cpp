// Chef's current rating is X, and he wants to improve it.
// It is generally recommended that a person with rating X should solve problems whose difficulty lies in the range [X, X+200],
// i.e, problems whose difficulty is at least X and at most X+200.
// You find out that Chef is currently solving problems with a difficulty of Y.
// Is Chef following the recommended practice or not?


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>=x && y<=x+200){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
