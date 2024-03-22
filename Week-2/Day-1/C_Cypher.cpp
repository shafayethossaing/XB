#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int sz; cin>>sz;
        vector<int>v(sz);
        for(int i = 0; i < sz; i++) cin>>v[i];

        vector<string>str;
        for (int i = 0; i < sz; i++)
        {
            int val; cin>>val;
            string s; cin>>s;
            str.push_back(s);
        }
        
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < str[i].size(); j++)
            {
                if(str[i][j] == 'D'){
                    if(v[i] == 9) {
                        v[i] = 0;
                        v[i]--;
                    }
                    v[i]++; 
                }
                if(str[i][j] == 'U'){
                    if(v[i] == 0) {
                        v[i] = 9;
                        v[i]++;
                    }
                    v[i]--;
                }

            }
        }
        for(auto el:v) cout<<el<<" ";
        cout<<endl;
    }
    return 0;
}