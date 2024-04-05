#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s1, s2; cin>>s1>>s2;
        if(s1 == s2) cout<<"="<<endl;
        else{
            if(s1.find('S') != string::npos and s2.find('S') != string::npos){
                if(s1.size() > s2.size()) cout<<'<'<<endl;
                else cout<<'>'<<endl;
            }else if(s1.find('M') != string::npos and s2.find('M') != string::npos){
                if(s1.size() > s2.size()) cout<<'>'<<endl;
                else cout<<'<'<<endl;
            }
            else if(s1.find('L') != string::npos and s2.find('L') != string::npos){
                if(s1.size() > s2.size()) cout<<'>'<<endl;
                else cout<<'<'<<endl;
            }
            else if(s1.find('S') != string::npos and s2.find('M') != string::npos){
                cout<<'<'<<endl;
            }
            else if(s1.find('M') != string::npos and s2.find('S') != string::npos){
                cout<<'>'<<endl;
            }
            else if(s1.find('S') != string::npos and s2.find('L') != string::npos){
                cout<<'<'<<endl;
            }
            else if(s1.find('L') != string::npos and s2.find('S') != string::npos){
                cout<<'>'<<endl;
            }
            else if(s1.find('L') != string::npos and s2.find('M') != string::npos){
                cout<<'>'<<endl;
            }
            else if(s1.find('M') != string::npos and s2.find('L') != string::npos){
                cout<<'<'<<endl;
            }
        }
    }
    
    return 0;
}