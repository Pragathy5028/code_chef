// Chef's coding class is very famous in Chefland.
// This year X students joined his class and each student will require one chair to sit on.
// Chef already has Y chairs in his class.
// Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

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
	        cout<<x-y<<endl; //if no of students > no of chairs
	    }
	    if (x<y){
	        
	        cout<<0<<endl;//if no of students <no of chairs or both =
	    }
	}
	return 0;
}
