#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string checkStr = "meow";
        bool isTrue = true;
        map<char, int>mp;
        for (int i = 0; i < s.size(); i++) mp[tolower(s[i])]++;
        if(mp.size() != checkStr.size()){
            cout<<"NO"<<endl;
        }else{
            int i, j;
            for (i = 0, j = 0; i < s.size(), j < checkStr.size();)
            {
                if(checkStr[j] == tolower(s[i])){
                    while(tolower(s[i]) == checkStr[j]){
                        i++;
                    }
                }
                j++;
                if(tolower(s[i]) != checkStr[j]){
                    isTrue = false;
                    break;
                }
            }
            if(!isTrue) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}
