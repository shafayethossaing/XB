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
        string s, ans = ""; cin>>s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1') one++;
            else zero++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1'){
                if(zero > 0) {
                    ans.pub('0');
                    zero--;
                }else break;
            }
            else if(s[i] == '0'){
                if(one > 0){
                    ans.pub('1');
                    one--;
                }else break;
            }
        }
        cout<<s.size() - ans.size()<<endl;
        
    }
    
    return 0;
}