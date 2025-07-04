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
    int n = 0;
    cin>>n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) arr[i] = i+1;
    
    vector<int> res;
    if(n%2) {
        int i = 1;
        int mid = n/2;
		res.push_back(arr[mid]);
        while(i <= n/2) {
            res.push_back(arr[mid-i]);
            res.push_back(arr[mid+i]);
			i++;
        }

    } else {
        int i = 1;
        int mid = n/2;
		res.push_back(arr[mid]);
        while(i <= n/2) {
			if(mid+i < n)
            res.push_back(arr[mid+i]);
            if(mid-i>=0)
			res.push_back(arr[mid-i]);
			i++;
		}
    }
	for(int val: res) cout<<val<<" ";
	cout<<endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t = 0;
	cin>>t;
	
	while(t--) solve();
	return 0;
}