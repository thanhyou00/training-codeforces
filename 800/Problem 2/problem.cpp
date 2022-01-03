#include<bits/stdc++.h>
using namespace std;

void solve(int t) {
	string str;
	int len ;
	while(t--) {
		cin>>str;
		len = str.length();
		if(len%2==0) {
			(str.substr(0,len/2)==str.substr(len/2,len))?cout<<"YES"<<endl:cout<<"NO"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}

int main() {
	int t;
	cin>>t;
	solve(t);
	return 0;
}

