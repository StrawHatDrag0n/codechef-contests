#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
 ll t = 0;
 cin>>t;

 while(t--) {
    ll n = 0, k = 0;
    cin>>n>>k;
    ll array[n+1];
    ll steps [n+1];
    ll player[n+1];
    fill(steps, steps+n+1, -1);
    for(ll i = 0; i < n; i++)
        cin>>array[i];
    
    ll x = INT_MAX;
    ll playerz = -1;
    for (ll i = 0; i < n; i++) {
        if (k % array[i] == 0) {
            if (x > (k / array[i])) {
                playerz = array[i];
                steps[i] = k / array[i];
                x = steps[i];
            }
        }
    }
    cout<<playerz<<endl;
 }
}