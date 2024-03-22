#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s1, s2; cin>>s1>>s2;
        // filtering
        for (int i = 0; i < n; i++)
        {
            if(s1[i] == 'G' and s2[i] == 'B'){
                s1[i] = 'W', s2[i] = 'W';
            }
            if(s1[i] == 'B' and s2[i] == 'G'){
                s1[i] = 'W', s2[i] = 'W';
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(s1[i] != s2[i]) {
                flag = false;
                break;
            }
        }
        
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
       
    return 0;
}