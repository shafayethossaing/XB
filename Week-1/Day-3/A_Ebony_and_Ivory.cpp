#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,target; cin>>a>>b>>target;

    bool flag = false;
    for (int i = 0; i <= target; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if(i*a + j*b == target or i*b + j*a == target){
                flag = true;
                break;
            }
        }
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}