#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        vector<string>v;
        int n, k; cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            string s; cin>>s;
            v.push_back(s);
        }

        
        int bestDif = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int ans = 0;
                for (int l = 0; l < v[i].size(); l++)
                {
                    ans += abs(v[j][l] - v[i][l]);
                }
                if(ans < bestDif) bestDif = ans;
            }
        }
        cout<<bestDif<<endl;
    }
    return 0;
}