#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,result = 0;
    cin>>n;
    string st;
    for(int i=0;i<n;i++){
        cin>>st;
        if(st == "++X"){
            result++;
        }else if(st == "--X"){
            result--;
        }else if(st == "X++"){
            result++;
        }else if(st == "X--"){
             result--;
        }
        // cout<<"murad"<<" ";
    }

    cout<<result<<endl;
 
  return 0;
}