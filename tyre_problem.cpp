// There are N bikes and MM cars on the road.
// Each bike has 2 tyres.
// Each car has 4 tyres.
// Find the total number of tyres on the road.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<<n*2+m*4<<endl;
	}
	return 0;
}
