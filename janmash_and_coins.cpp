// Janmansh received X coins of 10 rupees and Y coins of 5 rupees from Chingari
// Since he is weak in math, can you find out how much total money does he have?

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<10*x+5*y<<endl;
	}
	
	return 0;
}
