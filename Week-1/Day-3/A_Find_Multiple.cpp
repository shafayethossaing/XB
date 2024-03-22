#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;
    for (int i = 0; i*c <= b; i++)
    {
        if(i*c >= a and i*c <= b){
            cout<<i*c;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}