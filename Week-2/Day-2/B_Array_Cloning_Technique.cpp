#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        map<int, int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        // Get max
        int mx = INT_MIN;
        for(auto el:mp) if(el.second > mx) mx = el.second;


        // Process
        int needed_amount = v.size() - mx;
        int ans = needed_amount;
        while(1){
            if(mx >= n) break;
            mx = mx*2;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}