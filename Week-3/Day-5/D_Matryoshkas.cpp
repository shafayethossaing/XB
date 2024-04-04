#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long int>v(n);
        vector<pair<long long int, long long int>>v1;
        for (int i = 0; i < n; i++) cin>>v[i];

        // Storing with frequency
        sort(v.begin(), v.end(), greater<int>());
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while(i + 1 < n and v[i] == v[i+1]){
                i++;
            }
            v1.push_back({v[j], i-j+1});
            j = i+1;
        }

        int ans = v1[0].second;
        for (int i = 1; i < v1.size(); i++)
        {
            if(v1[i].first + 1 == v1[i-1].first){
                if(v1[i].second > v1[i-1].second){
                    ans += v1[i].second - v1[i-1].second;
                }
            }else {
                ans += v1[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
