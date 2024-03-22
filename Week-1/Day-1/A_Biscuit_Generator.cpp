#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;
    if(a > c) cout<<0;
    else{
        int times = c / a;
        cout<<times*b;
    }
    return 0;
}