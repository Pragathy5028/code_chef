// Chef appeared for a placement test.
// There is a problem worth X points.
// Chef finds out that the problem has exactly 10 test cases.
// It is known that each test case is worth the same number of points.
// Chef passes N test cases among them.
// Determine the score Chef will get.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,N;
	    cin>>X>>N;
	    cout<<N*(X/10)<<endl;
	}
	return 0;
}