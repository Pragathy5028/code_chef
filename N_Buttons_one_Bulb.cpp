// Kulyash stays in room that has a single bulb and N buttons.
// The bulb is initially on.
// The initial states of the buttons are stored in a binary string SS of length N— if Siis 0,
// the i-th button is off, and if Si iS is 1,
// the i-th button is on.
// If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.
// Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string RR of length N.
// He asks you to determine the final state of the bulb.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    // cout<<"Enter the total number of test cases: ";
	cin>>T;
	while(T--)
	{
	   int N,count=0;
    //   cout<<"Enter the length of the sequence: ";
       cin>>N;
	   string S,R;
	   //cout<<"Enter the first sequence:\n";
       cin>>S;
	   //cout<<"Enter the second sequence:\n";
       cin>>R;
	   for(int i=0;i<N;i++)
	   {
	       if(S[i]!=R[i]){// check digitwise
	           count++;
	       }
	       else{
	           S[i]=R[i];
	       }
	       
	   }
	   if(count%2==0)
		{// if change is even=on
			cout<<1<<endl;
		}
		else // if change is odd=off
		{
			cout<<0<<endl;
		}
	   
	}
	return 0;
}
