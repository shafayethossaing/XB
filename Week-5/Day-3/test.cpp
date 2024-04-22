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
    vector<pair<ll, ll>>v;
    vll optional;
    map<int, int>mp;
    for (int i = 0; i < (n*(n-1))/2; i++)
    {
        int val; cin>>val;
        optional.pub(val);
        mp[val]++;
    }


    for(auto el:mp) v.pub({el.second, el.first});
    sorta(v);

    vll ans;
    if(mp.size() == 1){
        for (int i = 0; i < n; i++)
        {
            ans.pub(optional[0]);
        }
    }else{
        for(auto el:v) {
            if(ans.size() < el.first){
                int howManyNeeded = (el.first + 1) - 1;
                int highestValNeeded = el.second + howManyNeeded;

                for (int i = 0; i < howManyNeeded; i++)
                {
                    ans.pub(el.second);
                }
                ans.pub(el.second);
            }else{
                ans.pub(el.second);
            }
        }
    }
    range(ans);
    return 0;
}