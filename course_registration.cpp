// There is a group of N friends who wish to enroll in a course together.
// The course has a maximum capacity of M students that can register for it.
// If there are K other students who have already enrolled in the course, 
// determine if it will still be possible for all the NN friends to do so or not.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    if(n+k>m){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
