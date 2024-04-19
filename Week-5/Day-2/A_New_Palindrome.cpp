// !

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
        string s; cin>>s;
        bool isPossible = false;
        if(s.size() % 2 == 0 and s.size() > 2){
            for (int i = 1; i < s.size()/2; i++)
            {
                if(s[i] != s[i-1]){
                    isPossible = true;
                    break;
                }
            }
        }
        else if(s.size() % 2 != 0 and s.size() > 3){
            for (int i = 1; i < s.size()/2; i++)
            {
                if(s[i] != s[i-1]){
                    isPossible = true;
                    break;
                }
            }
        }
        if(isPossible) yes;
        else no;
    }
    return 0;
}