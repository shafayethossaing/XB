#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll ans = 0;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        map<tuple<ll, ll, ll>, ll>mp;
        for (int i = 0; i+2 < n; i++)
        {
            ans += mp[{v[i], v[i+1], -1}] + mp[{v[i], -1, v[i+2]}] + mp[{-1, v[i+1], v[i+2]}] - 3 * mp[{v[i], v[i+1], v[i+2]}];
            mp[{v[i], v[i+1], -1}]++;
            mp[{v[i], -1, v[i+2]}]++;
            mp[{-1, v[i+1], v[i+2]}]++;
            mp[{v[i], v[i+1], v[i+2]}]++;
        }
        cout<<ans<<endl;
    }
    
    
    
    return 0;
}