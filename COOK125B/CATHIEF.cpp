// Could not solve during the competition

#include<bits/stdc++.h>
#define ll long long int


using namespace std;

int main () {
    int t = 0;
    cin>>t;
    while(t--) {
        int x = 0, y = 0, K = 0, N = 0;
        cin>>x>>y>>K>>N;
        int diff_between = abs(x - y);
        if (diff_between%(2 * K) == 0)
            cout<<"Yes\n";
        else {
            cout<<"No\n";
        }
    }
}