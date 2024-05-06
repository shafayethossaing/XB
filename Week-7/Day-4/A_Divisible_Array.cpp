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
        int n; cin>>n;
        vll v(n);
        ll sum = 0, cnt = 2;
        for (int i = 1; i < n; i++)
        {
            v[i] = cnt;
            sum += cnt;
            cnt++;
        }
        
        ll need = n;

        while(1){
            if(need > sum) break;
            need = need + n;
        }
        v[0] = need-sum;
        range(v); cout<<endl;
    }
    
    return 0;
}