#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main () {
    ll n = 0, m = 0;
    cin>>n>>m;
    vector<int> A(n);
    vector<int> B(m);
    for(int i = 0; i < n; i++)
        cin>>A[i];

    for(int i = 0; i < m; i++)
        cin>>B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll total_swaps = 0;
    ll new_n = n;
    for (int i = 0; i < m; i++) {
        if (B[i] < A[0]) {
            total_swaps += n;
        } else if (B[i] > A[0]) {
            continue;
        }
    }
    cout<<total_swaps<<endl;
}