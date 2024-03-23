#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        string s; cin>>s;
        map<char, int>mp;

        for (int i = 0; i < n; i++) mp[s[i]]++;

        int odd = 0;
        for(auto el:mp) if(el.second % 2 != 0) odd++;
        
        if(odd-1 < 0) odd = 0;
        else odd--;

        if(odd <= m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}