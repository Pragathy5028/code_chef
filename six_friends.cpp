// Six friends go on a trip and are looking for accommodation.
// After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms. 
// A double room costs Rs. X, while a triple room costs Rs. Y.
// The friends can either get three double rooms or get two triple rooms.
// Find the minimum amount they will have to pay to accommodate all six of them.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(3*x<=2*y){
	        cout<<3*x<<endl;
	    }
	    else{
	        cout<<2*y<<endl;
	    }
	}
	return 0;
}



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<min(3*x,2*y)<<endl;
	    
	}
	return 0;
}
