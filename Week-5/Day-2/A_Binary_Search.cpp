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


bool binarySearch(vector<ll> &v, ll target){
    ll left = 0, right = v.size()-1;
    while(left <= right){
        ll mid = left + (right - left) / 2;
        if(v[mid] == target) return true;
        else if(v[mid] > target) right = mid-1;
        else left = mid+1;
    }
    return false;
}

int main(){ Rocket;
    ll n,q; cin>>n>>q;
    vll v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    
    while(q--){
        ll val; cin>>val;
        if(binarySearch(v, val)) yes;
        else no;
    }
    return 0;
}