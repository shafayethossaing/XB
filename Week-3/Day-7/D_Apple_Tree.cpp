#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adjlist;
vector<int>countNumberOfWays;
 
 
int dfs(int src, int parent){
    int cnt = 0;
    for(auto child: adjlist[src]){
        if(child != parent){
            cnt += dfs(child, src);
        }
    }
 
    if(cnt == 0 and adjlist[src].size() == 1) cnt++;
    countNumberOfWays[src] = cnt;
    return cnt;
}
 
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        adjlist.resize(n+1);
        countNumberOfWays.resize(n+1, 0);
        for(int i = 0; i < n-1; i++){
            int a,b; cin>>a>>b;
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }
 
 
        dfs(1,1);
        int q; cin>>q;
        while(q--){
            int a,b; cin>>a>>b;
            long long ans = (1LL * countNumberOfWays[a]) * (1LL * countNumberOfWays[b]);
            cout<<ans<<endl;
        }
        adjlist.clear();
        countNumberOfWays.clear();
    }
 
    return 0;
}