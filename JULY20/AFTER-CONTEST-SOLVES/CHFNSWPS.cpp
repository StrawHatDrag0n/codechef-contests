#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t = 0;
    scanf("%d", &t);

    while(t--) {
        int n = 0;
        scanf("%d", &n);
        ll A[n+1], B[n+1];
        map<ll, ll> A_freq, B_freq, T_freq;
        for(int i = 0; i < n; i++) {
            scanf("%lld", &A[i]);
            A_freq[A[i]]++;
            T_freq[A[i]]++;
        }
        for(int i = 0; i < n; i++){ 
            scanf("%lld", &B[i]);
            B_freq[B[i]]++;
            T_freq[B[i]]++;
        }
        sort(A, A+n);
        sort(B, B+n);
        bool flag = true;
        for(auto i:T_freq){
            if(i.second%2 != 0) {
                flag = false;
                break;
            }
        }
        int cost  = 0;
        if(flag) {
            int i = 0, j = 0;
            while(i < n && j < n) {
                if (A[i] == B[j]) {
                    i++;
                    j++;
                } else if ((A_freq[A[i]] == B_freq[A[i]]) && (A_freq[B[j]] == B_freq[B[j]])) {        
                    i++;
                    j++;
                    continue;
                } 
                else if ((A_freq[A[i]] % 2 == 0 && B_freq[B[j]] % 2 == 0) || (A_freq[A[i]] % 2 != 0 && B_freq[B[j]] % 2 != 0)) {
                    if (A[i] > B[j]) {
                        j++;
                        continue;
                    }
                    else if (A[i] < B[j]) {
                        i++;
                        continue;
                    } 
                    cost += min(A[i], B[j]);
                    if (A_freq[A[i]] > B_freq[A[i]]){
                        A_freq[A[i]]--;
                        B_freq[A[i]]++;
                    } else{
                        A_freq[A[i]]++;
                        B_freq[A[i]]--;
                    }
                    if (A_freq[B[j]] > B_freq[B[j]]) {
                        A_freq[B[j]]--;
                        B_freq[B[j]]++;
                    } else {
                        A_freq[B[j]]++;
                        B_freq[B[j]]--;
                    }
                    i++;
                    j++;
                } else {
                    cost = -1;
                    break;
                }
            }
            cout<<cost<<endl;
        } else {
            cout<<-1<<endl;
        }

    }
}