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
        vector<pair<int, char>>b;
        vector<pair<int, char>>B;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'b'){
                // Removing the last element
                if(!b.empty()) b.erase(b.begin() + b.size()-1);
            }else if(s[i] == 'B'){
                // Removing the last element
                if(!B.empty()) B.erase(B.begin() + B.size()-1);
            }
            else if(s[i] >= 'a' and s[i] <= 'z'){
                b.pub({i, s[i]});
            }else{
                B.pub({i, s[i]});
            }
        }

        vector<pair<int, char>>ans;
        for (int i = 0; i < b.size(); i++) ans.pub({b[i].first, b[i].second});
        for (int i = 0; i < B.size(); i++) ans.pub({B[i].first, B[i].second});
        
        sorta(ans);
        for (int i = 0; i < ans.size(); i++) cout<<ans[i].second; cout<<endl;
    }

    return 0;
}