#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res ^= v[i]; 
        }

        if(res == 0) cout<<0<<endl;
        else{
            int ans = res;
            for(auto el:v){
                ans = min(ans, res^el);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}