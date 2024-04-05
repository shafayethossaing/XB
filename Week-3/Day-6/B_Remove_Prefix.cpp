#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long int>v(n);
        map<long long int, long long int>mp;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }   


        long long int ans = 0;
        for(auto el: mp){
            if(el.second > 1) ans += el.second;
        }
        ans = ans -1;
        if(ans <= 0) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}