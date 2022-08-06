// Chef's playlist contains 3 songs named A, B, and C, each of duration exactly X minutes.
// Chef generally plays these 3 songs in loop, i.e,A→B→C→A→B→C→A→…
// Chef went on a train journey of N minutes and played his playlist on loop for the whole journey.
// How many times did he listen to the song C completely?


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	     cout<<n/(3*x)<<endl;
	   
	    
	}
	return 0;
}
