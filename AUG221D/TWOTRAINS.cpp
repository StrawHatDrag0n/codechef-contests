#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

template class std::vector<int>;

void solve() {
    int n = 0;
    cin>>n;
    
    vector<int> p(n-1);
    for(int&val: p) cin>>val;
	
	vector<int> culTime;
	culTime.push_back(0);
	for(int i = 1; i <= n-1; i++) culTime.push_back(p[i-1] + culTime[i-1]);

	int aTime = 0, bTime = 0;
	while(aTime < culTime.back()) {
		vector<int>::iterator lowa = lower_bound(culTime.begin(), culTime.end(), aTime);
		vector<int>::iterator lowb = lower_bound(culTime.begin(), culTime.end(), bTime);
		int idxa = lowa - culTime.begin();
		int idxb = lowb - culTime.begin();
		
	}  

}

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 0;
	cin>>t;
	
	while(t--) solve();
	return 0;
}