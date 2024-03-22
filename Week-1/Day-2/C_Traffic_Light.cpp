#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    

    while(t--){
        int n; cin>>n;
        char ch; cin>>ch;
        string s; cin>>s;
        s += s;
        bool flag = false;
        int cnt = 0, res = 0;
        if(ch == 'g') {
            cout<<0<<endl;
            continue;
        }
        else {
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i] == 'g'){
                    res = max(res, cnt);
                    flag = false;
                }

                if(s[i] == ch and !flag){
                    flag = true;
                    cnt = 0;
                }

                if(flag == true) cnt++;
            }
            cout<<res<<endl;
        }
    }


    return 0;
}