// Kattapa, as you all know was one of the greatest warriors of his time.
// The kingdom of Maahishmati had never lost a battle under him (as army-chief),
// and the reason for that was their really powerful army, also called as Mahasena.
// Kattapa was known to be a very superstitious person.
// He believed that a soldier is "lucky" if the soldier is holding an even number of weapons,and "unlucky" otherwise.
// He considered the army as "READY FOR BATTLE"
// if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers,
// and "NOT READY" otherwise.
// Given the number of weapons each soldier is holding,
// your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY".


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int esum=0,osum=0;
	while(n--){
	    int a;
	    cin>>a;
	    if(a%2==0){
	        esum++;
	    }else{
	        osum++;
	    }
	    
	}
	if(esum>osum){
	    cout<<"READY FOR BATTLE\n";
	}else{
	    cout<<"NOT READY\n";
	}
	return 0;
}
