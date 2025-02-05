#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,a,b;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        int result = 2*b;
        // cout<<result;
        if(result >= a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

 
  return 0;
}