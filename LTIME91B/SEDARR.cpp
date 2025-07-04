#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// couldn't solve
int main () {
    ll t = 0;
    cin>>t;
    
    while(t--) {
        ll n = 0, k = 0;
        cin>>n>>k;
        vector<ll> A(n+1);
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin>>A[i];
            sum += A[i];
        }
        cout<<sum%k<<endl;
    }
}