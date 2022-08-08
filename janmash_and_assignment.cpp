// Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at X pm.
// Each assignment takes him 1 hour to complete.
// Can you tell whether he'll be able to complete all assignments on time or not?

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x+3>10){
	        cout<<"No\n";
	    }else{
	        cout<<"Yes\n";
	    }
	}
	return 0;
}
