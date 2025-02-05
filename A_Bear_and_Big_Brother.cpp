#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    int result = 0;
    while(1){
        a = a*3;
        b = b*2;
        result++;
        if(a > b){
            break;
        }
    }
    cout<<result;
 
  return 0;
}