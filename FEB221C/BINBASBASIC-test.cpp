#include <bits/stdc++.h>
#define ld long double
#define lli long long int
#define ulli unsigned long long int
#define REP(i, start, end) for(int i = start; i < end; i++)
#define REPE(i, start, end) for(int i = start; i <= end; i++)
#define RREP(i, start, end) for(int i = start; i > end; i--)
#define RREPE(i, start, end) for(int i = start; i >= end; i--)

using namespace std;

string generateStringHelper(string s, int n) {
    if(n == 0) return s;
    generateStringHelper(s + "0", n-1);
    generateStringHelper(s + "1", n-1);
}

vector<string> generateStrings(int n) {
    vector<string> s;
    s.push_back(generateStringHelper("", n));
    return s;
}

int main() {
	int N = 1000;
    for(int n = 1; n <= N; n++) {
        vector<string> s = generateStrings(n);
    }
}