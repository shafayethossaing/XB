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
        string a, b; cin>>a>>b;
        map<string, int>mp;

        for (int i = 0; i < a.size(); i++)
        {
            string s = "";
            s += a[i];
            mp[s]++;
            for (int j = i+1; j < a.size(); j++)
            {
                s += a[j];
                mp[s]++;
            }
        }

        string found = "";
        vector<string>vv;
        for (int i = 0; i < b.size(); i++)
        {
            string matched = "";
            matched += b[i];
            if(mp[matched] != 0) vv.push_back(matched);
            if(mp[matched] != 0) found = matched; 
                for (int j = i+1; j < b.size(); j++){
                    matched += b[j];
                    if(mp[matched] != 0){
                        if(matched.size() > found.size()){
                            found = matched;
                            vv.push_back(matched);
                        }
                    }
                }
        }
        
        string finalStr = "";
        for(auto el: vv) if(el.size() > finalStr.size()) finalStr = el;
        
        // Get the ans
        int a_size = a.size() - finalStr.size();
        int b_size = b.size() - finalStr.size();
        if(a.size() == 1 and b.size() == 1){
            if(a[0] != b[0]) cout<<2<<endl;
            else cout<<a_size + b_size<<endl;
        }else cout<<a_size + b_size<<endl;
    }

    return 0;
}