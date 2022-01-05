#include<bits/stdc++.h>
using namespace std;

void solve(int t) {
	int n,m;
	while(t--) {
		set<int> s;
		vector<int> vec;
		int sum = 0;
		cin>>n;
		for(auto i=0;i<n;i++) {
			cin>>m;
			s.insert(abs(m));
			vec.push_back(abs(m));
		}
		// Logic code in here
	for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
		int count =0;
		for(int i=0;i<n;i++) {
			if(*it==vec[i]) count++;
		}
		if(count==1 || (*it==0 and count>=1)) sum +=1;
		if(*it!=0 and count>=2) sum +=2;
	}
		cout<<sum<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	solve(t);
	return 0;
}

