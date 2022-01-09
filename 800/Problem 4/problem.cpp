#include<bits/stdc++.h>
using namespace std;

void solve(int t) {
	string str, check;
	while(t--) {
		int res =0;
		cin>>str>>check;
		for(int i=1;i<check.size();i++) {
			res += abs(int(str.find(check[i]) - str.find(check[i-1])));		
		}
		cout<<res<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	solve(t);
	return 0;
}

