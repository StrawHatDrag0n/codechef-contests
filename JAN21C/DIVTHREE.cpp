#include<bits/stdc++.h>

using namespace std;

int main () {
    int t = 0;
    cin>>t;

    while(t--) {
        int n = 0, k = 0, d = 0;
        cin>>n>>k>>d;
        vector<int> A(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin>>A[i];
            sum += A[i];
        }
        if(sum/k > d)
            cout<<d<<endl;
        else
            cout<<sum/k<<endl;

    }
}