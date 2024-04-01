#include <iostream> 
#include <vector> 
#include <map> 
using namespace std; 
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string>v(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]] = 1;
        }
        string ans = "";
 
        for (int i = 0; i < n; i++)
        {
            string check = v[i];
            bool flag = false;
            for (int j = 1; j < check.size(); j++)
            {
                string s1 = check.substr(0, j), s2 = check.substr(j, check.size()-j);
                if(mp[s1] and mp[s2]){
                    flag = true;
                    break;
                }
            }
            if(flag) ans += '1';
            else ans += '0';
        }
        cout<<ans<<endl;
    }
    return 0; 
}