#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    string s = to_string(a);
    int needsZero = 4 - s.size();
    string newStr = "";
    for (int i = 0; i < needsZero; i++)
    {
        newStr += '0';
    }
    newStr += s;
    cout<<newStr;
    return 0;
}