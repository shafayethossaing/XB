#include<bits/stdc++.h>
using namespace std;
// Own Logic
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int val;
        int cnt = 0;
        map<int, int>mp;
        map<int, int>mp2;
        for (int i = 0; i < (n-1)*n; i++)
        {
            cin>>val;
            if(cnt == n-1) cnt = 0;
            mp[val] += cnt;
            cnt++;
        }
        
        for(auto el:mp)  mp2[el.second] = el.first;
        for(auto el:mp2) cout<<el.second<<" ";
        cout<<endl;
    }
    return 0;
}