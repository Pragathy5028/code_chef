// In ChefLand, human brain speed is measured in bits per second (bps).
// Chef has a threshold limit of X bits per second above which his calculations are prone to errors.
// If Chef is currently working at Y bits per second, is he prone to errors?
// If Chef is prone to errors print YES, otherwise print NO.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int X,Y;
	cin>>X>>Y;
	if(Y>X){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}
