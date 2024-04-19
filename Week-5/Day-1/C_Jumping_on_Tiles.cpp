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
        vector<pair<char, int>>v;
        char mn = min(s[0], s[s.size()-1]);
        char mx = max(s[0], s[s.size()-1]);
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] >= mn and s[i] <= mx){
                v.pub({s[i], i+1});
            }
        }

        // Pair sorting by indexs
        sort(v.begin(), v.end(), [&](pair<char, int>a, pair<char, int>b){
            return a.second < b.second;
        });

        // Pair sorting by character
        if(s.size() > 2){
            sort(v.begin()+1, v.begin()+v.size()-1, [&](pair<char, int>a, pair<char, int>b){
                if(s[0] > s[s.size()-1]){
                    return a.first > b.first;
                }else{
                    return a.first < b.first;
                }
            });
        }


        int diff = 0;
        vi sequence;
        sequence.push_back(1);
        for (int i = 1; i < v.size(); i++)
        {
            diff += abs(v[i-1].first - v[i].first);
            sequence.push_back(v[i].second);
        }
        
        cout<<diff<<" "<<sequence.size()<<endl;
        range(sequence);
        cout<<endl;
    }
       
    return 0;
}