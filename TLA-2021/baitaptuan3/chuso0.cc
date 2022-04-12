#include <iostream>
using namespace std; 

int main(){
    long long n; cin>>n; 
    int dem=0; 
    while(n>=5){
        n=n/5; 
        dem+=n; 
   }
   cout<<dem; 
   return 0; 
}
