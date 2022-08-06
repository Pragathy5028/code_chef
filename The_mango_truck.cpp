// You are given that a mango weighs X kilograms and a truck weighs Y kilograms.
// You want to cross a bridge that can withstand a weight of Z kilograms.
// Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,z;
// 	    cin>>x>>y>>z;
// 	    if(x+y<z){
// 	        cout<<((z-(x+y))/x)+1<<endl;
	        
// 	    }else if(x+y==z){
// 	        cout<<1<<endl;
	        
// 	    }else{
// 	        cout<<0<<endl;
	        
// 	    }
// 	}
// 	return 0;
// }

// alternate solution

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<(z-y)/x<<endl;
	}
	return 0;
}

