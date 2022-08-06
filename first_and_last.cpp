// sum of first and last number

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     // cout<<"Enter the number of test cases :\n";
//     cin>>t;
//     while(t--){
//         int n;
//         int x,y=0;
//         // cout<<"Enter a number :\n";
//         cin>>n;
//         x=n;
//         string str_n = to_string(n);
//         for(int i=1; i<size(str_n); i++){
//             y=x/10;
//             x=y;
//         }
//          cout<<y+n%10<<endl;

//     }

   
//     return 0;
// } //wrong-when input 1,output=1 instead of 2





#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,last,first;
		cin>>n;
		last=n%10;
		while(n>=10)
		{
			n=n/10;
		}
		first=n;
		cout<<last+first<<"\n";
		
	}
	return 0;
}