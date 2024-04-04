#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, q; cin>>n>>q;
        map<int, vector<int>>mp;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            mp[v[i]].push_back(i);
        }

        while(q--){
            int a,b; cin>>a>>b;
            if(mp[a].empty() || mp[b].empty()) {
                cout<<"NO"<<endl;
                continue;
            }

            if(a == b) cout<<"YES"<<endl;
            else{
                if(mp[a].front() < mp[b].back()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}