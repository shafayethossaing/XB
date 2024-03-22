#include<bits/stdc++.h>
using namespace std;
int main(){
    string ss; cin>>ss;
    string s = "abcdefghijklmnopqrstuvwxyz";
    map<char, int>mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]]++;
    
    for (int i = 0; i < ss.size(); i++) mp[ss[i]]++;

    vector<char>v;
    char a = 'z';
    bool flag = false;
    for(auto el:mp) {
        if(el.second == 1) {
            if(el.first < a) a = el.first;
            flag = true;
        }
    }
    
    if(flag) cout<<a;
    else cout<<"None";
    return 0;
}