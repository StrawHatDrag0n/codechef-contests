#include<bits/stdc++.h>

using namespace std;

int main () {
    int t = 0;
    cin>>t;

    while(t--) {
        int n = 0, m = 0;
        cin>>n>>m;

        vector<int> A(n), B(m);
        for(int i = 0; i < n; i++)
            cin>>A[i];

        for(int i = 0; i < m; i++)
            cin>>B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        int a_sum = accumulate(A.begin(), A.end(), 0);
        int b_sum = accumulate(B.begin(), B.end(), 0);
        
        if (a_sum > b_sum) {
            cout<<0<<endl;
        } else {
            int swaps = 0;
            for(int i = 0, j = m-1; i < n && j >=0;) {
                a_sum += (B[j] - A[i]);
                b_sum += (A[i] - B[j]);
                swaps++;
                if(a_sum > b_sum) {
                    break;
                } else {
                    i++;
                    j--;
                }
            }
            if (a_sum <= b_sum) {
                cout<<-1<<endl;
            } else 
                cout<<swaps<<endl;
        }
    }
}