#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string, int>mp;
    vector<string>v(n);

    // Take input
    for(int i = 0; i < n; i++) cin>>v[i];

    // Calculate
    string s = "";
    for(int i = v.size()-1; i >= 0; i--){
        if(mp[v[i]] == 0){
            s += v[i][v[i].size()-2];
            s += v[i][v[i].size()-1];
            mp[v[i]]++;
        }else continue;
    }  
    cout<<s<<endl;
    
    return 0;
}