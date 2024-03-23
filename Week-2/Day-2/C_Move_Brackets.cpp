#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int o = 0, c = 0, ans = 0;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(') o++;
            else{
                if(o > 0) o--;
                else if(o == 0) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}