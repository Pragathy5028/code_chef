// Chef is watching TV.
// The current volume of the TV is X.
// Pressing the volume up button of the TV remote increases the volume by 1
//  while pressing the volume down button decreases the volume by 1.
//  Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<x-y<<endl;
	    }
	    else{
	        cout<<y-x<<endl;
	    }
	}
	return 0;
}
