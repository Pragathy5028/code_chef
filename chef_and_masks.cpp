// Chef is shopping for masks. In the shop, he encounters 22 types of masks:
// Disposable Masks — cost X but last only 1 day.
// Cloth Masks — cost Y but last 10 days.
// Chef wants to buy masks to last him 100100 days.
// He will buy the masks which cost him the least.
// In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks.
// Which type of mask will Chef choose?


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x*100<y*10){
	        cout<<"Disposable\n";
	    }
	    else{
	        cout<<"Cloth\n";
	    }
	}
	return 0;
}
