#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Get Divisors of a Number (get all divisor's sum if you want)
vll divisors(ll digit){ vll factors;
    for (ll i = 1; i * i <= digit; i++){
        if(digit % i == 0){
            factors.pub(i); 
            if((digit / i) != i) factors.pub(digit / i);
        }
    }
    return factors;
}

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int>primes;

// Sieve
void PrimeGen(int n){
    // Making all the odd numbers prime [Except 2, all the primes are odd]
    for(int i = 3; i <= n; i+=2) isPrime[i] = 1;

    // Filtering composite by Harmony Series
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i+=2){
        if(isPrime[i] == 1){
            for (int j = i*i; j <= n; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    // Pushing Primes
    primes.push_back(2);
    for (int i = 3; i <= n; i+=2){
        if(isPrime[i] == 1) primes.push_back(i); 
    }

    range(primes);
}




int main(){ Rocket;
    ll n; cin>>n;
    if(n & 1){
        ll divide = n/2;
        divide--;
        cout<<divide+1<<endl;
        for (int i = 0; i < divide; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }else{
        ll divide = n/2;
        cout<<divide<<endl;
        for (size_t i = 0; i < divide; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}