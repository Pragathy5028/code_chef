// It is the final day of La Liga. Chef has a certain criteria for assessing football matches.
// In particular, he only likes a match if:
// The match ends in a draw, and,
// At least one goal has been scored by either team.
// Given the goals scored by both the teams as X and Y respectively,
//  determine whether Chef will like the match or not.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((x !=0 && y!=0) && (x==y)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
