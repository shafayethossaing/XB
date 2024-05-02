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


bool solve(vll &v, ll mid){
    vll res;
    ll val = v[0]-mid;
    res.pub(val);
    for (int i = 0; i < v.size(); i++)
    {
        if(abs(val - v[i]) > mid){
            val = v[i]-mid;
            res.pub(val);
        }
    }

    if(res.size() <= 3) return true;
    else return false;
}



ll binary_search(vll &v){
    ll left = 0, right = 1e9+5;
    ll ans = 1e9;
    while(left <= right){
        ll mid = (left+right) / 2;
        if(solve(v, mid)){
            ans = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    return ans;
}


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sortd(v);
        cout<<binary_search(v)<<endl;
    }       
    return 0;
}