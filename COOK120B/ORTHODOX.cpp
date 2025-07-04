#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t = 0;
    cin>>t;

    while(t--) {
        ll n = 0;
        cin>>n;
        ll array[n];
        ll OR[n];
        map<ll, ll> or_map;
        for(int i = 0; i < n; i++) {
            cin>>array[i];
            OR[i] = array[i];
            or_map.insert(pair<ll, ll>(array[i], 1)); 
        }
        bool is_repeated = false;
        // O (n^2)
        for(int i = 1; i < n && !is_repeated; i++) {
            ll or_result = array[i];
            for(int j = 0; j < i && !is_repeated; j++) {
                 or_result = or_result | array[j];
            }
            if (or_map.find(or_result) != or_map.end()) {
                is_repeated = true;
                break;
            } else {
                or_map.insert(pair<ll, ll>(or_result, 1));
            }
        }

        // O (n)
        // ll or_sum = array[0];
        // for(int i=1; i < n; i++) {
        //     or_sum = or_sum | array[i];
        //     if (or_map.find(or_sum) != or_map.end()) {
        //         is_repeated = true;
        //         break;
        //     } else {
        //         or_map.insert(pair<ll, ll>(or_sum, 1));
        //     }
        // }


        if (is_repeated) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }

        // for(map<ll, ll>::iterator it = or_map.begin(); it != or_map.end(); ++it) {
        //     cout<<it->first<<endl;
        // }
    }
}