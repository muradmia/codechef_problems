#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b,c,d;
     cin>>a>>b>>c>>d;
        if(a*2+b == c*2+d){
            cout<<"Equal\n";
        }else if(a*2+b > c*2+d){
            cout<<"Messi\n";
        }else{
            cout<<"Ronaldo\n";
        }
    return 0;
}