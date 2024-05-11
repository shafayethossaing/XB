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
        int n, q; cin>>n>>q;
        vll v(n), x;
        for (int i = 0; i < n; i++) cin>>v[i];

        map<ll, ll>mp;
        for (int i = 0; i < q; i++) {
            int val; cin>>val;
            if(mp[val] == 0) {
                x.pub(val);
                mp[val]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for(auto el:x){
                ll check = pow(2, el);
                if(v[i] % check == 0){
                    v[i] += pow(2, (el-1));
                }
            }
        }
        range(v); cout<<endl;
    }
       
    return 0;
}