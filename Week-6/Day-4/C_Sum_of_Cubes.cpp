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

const int maxN = 1e4;

int main(){ Rocket;

    vll pw;
    for(int i = 1; i <= maxN; i++){
        pw.pub(pow(i, 3));
    }

    int t; cin>>t;

    while(t--){
        
        ll n; cin>>n;
        bool isFound = false;
        for(int i = 0; i < maxN; i++){
            
            if(pw[i] >= n) break;

            ll left = 0, right = maxN - 1, mid;
            ll need = n - pw[i];
            bool ok = false;
            while(left <= right){
                mid = left + (right - left) / 2;
                if(pw[mid] == need){
                    ok = true;
                    break;
                }
                if(pw[mid] > need) right = mid-1;
                else left = mid+1;
            }

            if(ok){
                isFound = true;
                break;
            }
        }
        if(isFound) yes;
        else no;
    }

    return 0;
}