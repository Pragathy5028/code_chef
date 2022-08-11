// There were initially X million people in a town,
// out of which Y million people left the town and Z million people immigrated to this town.
// Determine the final population of town in million

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<(x-y)+z<<endl;
	}
	return 0;
}
