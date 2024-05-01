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



// Finding answer
ll getNum (ll n, ll m){
    ll left = 1, right = 2*1e9+9, ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        ll division = mid / n;
        ll subVal = mid - division;
        if(subVal == m){
            if(mid % n == 0){
                ans = mid-1;
                break;
            }else{
                ans = mid;
                break;
            }
        }
        if(m > subVal){
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    return ans;
}


int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        ll n, m; cin>>n>>m;
        cout<<getNum(n, m)<<endl;
    }
    return 0;
}