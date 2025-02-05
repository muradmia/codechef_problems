#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,oddcound = 0,evencound = 0;
    cin>>n;
    int arr[n];
        for(int i = 0; i < n;i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0){
                evencound++;
            }else{
                oddcound++;
            }
        }
// cout<<evencound;

if(evencound == oddcound){
    cout<<"NOT READY"<<endl;
}else if(evencound > oddcound){
    cout<<"READY FOR BATTLE"<<endl;
}else if(evencound > oddcound){
    cout<<"NOT READY"<<endl;
}else{
    cout<<"NOT READY"<<endl;
}

   
 
  return 0;
}