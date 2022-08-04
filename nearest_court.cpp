// Chef and Chefina are at positions X and Y on a number line.
// They both love badminton.
// It is known that badminton courts are located at every integer point.
// They want to find a court such that the maximum distance travelled by either of them is minimized.
// Formally,suppose they choose the badminton court at position Z.
// You need to find the minimum value of max(|X-Z|, |Y-Z|) across all possible choices of Z.
// Here, |X| denotes absolute value of X.
// Report this minimum value.

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,mid_point;
// 	    cin>>x>>y;
// 	    mid_point=(x+y)/2;
// 	    cout<<max(abs(x-mid_point),abs(y-mid_point))<<endl;
// 	}
// 	return 0;
// }

// alternate solution
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        float z=ceil(abs(x-y)/2);//ceil(2.3)=3 //ceil(-2.3)=2
    }
    return 0;
}