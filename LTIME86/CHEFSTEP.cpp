#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t = 0;
    scanf("%lld", &t);

    while(t--) {
        ll n = 0, k = 0;
        scanf("%lld %lld", &n, &k);
        string output;
        ll x = 0;
        for(ll i = 0; i < n; i++) {
            scanf("%lld", &x);
            if (x%k == 0) {
                output.push_back('1');
            } else {
                output.push_back('0');
            }
        }
        cout<<output<<endl;
    }
}