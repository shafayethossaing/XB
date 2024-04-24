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
    int n; cin>>n;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sorta(v);
    int q; cin>>q;
    while(q--){
        int a, b; cin>>a>>b;
        auto lowerBound = lower_bound(v.begin(), v.end(), a);
        auto upperBound = upper_bound(v.begin(), v.end(), b);
        cout<<upperBound - lowerBound<<" ";
    }
    
    return 0;
}