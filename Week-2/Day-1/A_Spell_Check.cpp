#include<bits/stdc++.h>
using namespace std;
int main(){
    string check = "Timru";
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        sort(s.begin(), s.end());
        if(check == s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}