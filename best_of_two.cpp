// Chef took an examination two times.
// In the first attempt, he scored X marks while in the second attempt he scored Y marks.
// According to the rules of the examination,
// the best score out of the two attempts will be considered as the final score.
// Determine the final score of the Chef.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,Y;
	    cin>>X>>Y;
	    if(X<=Y){
	        cout<<Y<<endl;
	    }
	    else{
	        cout<<X<<endl;
	    }
	}
	return 0;
}
