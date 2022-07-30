// Chef's computer has NN GB of free space.
// He wants to save X files, each of size 1 GB and Y files, each of size 2 GB on his computer.
// Will he be able to do so?
// Chef can save all the files on his computer only if 
// the total size of the files is less than or equal to the space available on his computer.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if((x+2*y)<=n){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
