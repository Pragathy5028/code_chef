// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     // cout<<"Enter total number of test cases : ";
//     cin>>n;
//     int a,b,c;
//     while(n--){
//         int big=0,small=0;
//         // cout<<"Enter the integers to compare with : ";
//         cin>>a>>b>>c;
//         if(a>b && a>c){
//             big=a;
//         }
//         else if(b>a && b>c){
//             big=b;
//         }
//         else{
//             big=c;
//         }
//         if(a<b && a<c){
//             small=a;
//         }
//         else if(b<a && b<c){
//             small=b;
//         }
//         else{
//             small=c;
//         }
//         if(a!= big && a!=small){
//             cout<<a<<endl;
//         }
//         else if(b!=big && b!=small){
//             cout<<b<<endl;
//         }
//         else{
//             cout<<c<<endl;
//         }
        
        
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && a<c)  || (a>c && a<b)){
            
            cout<<a<<endl;
           
        }
        else if((b>c && b<a)  || (b>a && b<c)){
            cout<<b<<endl;
            
        }
        else{
            cout<<c<<endl;
        }
        
    }
    return 0;
}

