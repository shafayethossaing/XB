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
    int n, target; cin>>n>>target;
    map<ll, int>mp;
    ll sum = 0, cnt = 0;
    mp[sum] = 1;
    for (int i = 0; i < n; i++)
    {
        ll x; cin>>x;
        sum += x;
        cnt += mp[sum-target];
        mp[sum]++;   
    }
    cout<<cnt;
    
    return 0;
}