#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
   
   for(int i = 0;i < t;i++){
    // int count = 0;
    cin>>x>>y;
    if(x == y){
        cout<<x-y<<"\n";
    }else if(x < y){
        cout<<0<<"\n";
   }else if(x > y){
        cout<<x-y<<"\n";
   }
   }
}
