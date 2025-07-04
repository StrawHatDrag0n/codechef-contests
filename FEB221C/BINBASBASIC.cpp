#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

void solve() {
    int N = 0, K = 0;
    cin>>N>>K;
    string s;
    cin>>s;
    int res = 0;
    for(int i = 0, j = N-1; i < j; i++, j--){
        if(s[i] != s[j]) res++;
    }
    if (res ==  K) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
	// your code goes here20
	int t = 0;
	cin>>t;
	
	while(t--) solve();
	return 0;
}
