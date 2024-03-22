#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; cin>>a>>b;
    int ans = 0;
    while(a <= b){
        long long int product = a*2;
        if(product <= b) ans++, a = product;
        else break;
    }
    cout<<ans+1;
    return 0;
}