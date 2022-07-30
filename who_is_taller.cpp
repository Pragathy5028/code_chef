// Alice and Bob were having an argument about which of them is taller than the other.
// Charlie got irritated by the argument, and decided to settle the matter once and for all.

// Charlie measured the heights of Alice and Bob,
// and got to know that Alice's height is X centimeters and Bob's height is Y centimeters.
// Help Charlie decide who is taller.
// It is guaranteed that X not equal not Y.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X>Y){
	        cout<<'A'<<endl;
	    }
	    else{
	        cout<<'B'<<endl;
	    }
	}  
	return 0;
	}
	

