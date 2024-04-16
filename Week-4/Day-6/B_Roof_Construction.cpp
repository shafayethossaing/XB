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
        vll v;
        int cnt = 0;
        int a = n;
        if( n == 2) cout<<0<<" "<<1<<endl;
        else{
            n--;
            while(n >= 0){
                cout<<n<<" ";
                if(__lg(n) != __lg(n-1)) {
                    break;
                }
                n--;
            }
            int i = 0;
            while(i < n) {
                cout<<i<<" ";
                i++;
            }
            cout<<endl;
        }

    }
    return 0;
}