#include<bits/stdc++.h>
using namespace std;
int main(){

    int N,A,B,X,Y;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A>>B>>X>>Y;
        if(A*B<=X*Y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
  return 0;
}