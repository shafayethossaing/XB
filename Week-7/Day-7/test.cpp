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
    int n, m; cin>>n>>m;
    vll v(n);
    int a[n];
    map<ll, ll>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    ll missing = 0;
    for (int i = 0; i <= n; i++)
    {
        if(mp[i] == 0){
            missing = i;
            break;
        }
    }
    
    vll ans;
    if(is_sorted(v.begin(), v.end()) == 1){
        for (int i = 1; i < n; i++)
        {
            ans.pub(v[i]);
        }
        ans.pub(missing);
        range(ans); cout<<endl;
    }else{
        ans.pub(missing);
        for (int i = 0; i < n-1; i++)
        {
            ans.pub(v[i]);
        }
        range(ans); cout<<endl;

    }
    
       
    return 0;
}