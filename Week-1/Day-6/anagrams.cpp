#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>txt(255,0), freq(255,0);

    string pat,text; cin>>pat; cin>>text;
    for (int i = 0; i < pat.size(); i++)
    {
        txt[pat[i]]++;
    }

    int sz = pat.size();

    int i = 0, j = 0;
    int cnt = 0;
    while(j < text.size()){
        freq[text[j]]++;

        if(j-i+1 == sz){
            if(txt == freq) {
                cnt++;
            }
            freq[text[i]]--;
            i++;
            
            j++;
        }else j++;
    }
    cout<<cnt;
    return 0;
}
