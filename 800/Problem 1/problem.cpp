#include <bits/stdc++.h>

using namespace std;

void solve(int num) {
	while(num--) {
		int l, sum = 0, temp ,count = 0;
		bool flag = true;
		vector <int> vec;
		for(int i = 0; i < 3; i++) {
			cin>>l;
			vec.push_back(l);
		}
		// Logic code in here
		int max = *max_element(vec.begin(), vec.end());
		for(auto i=0; i< vec.size() - 1;i++) {
			for(auto j=i+1;j<vec.size();j++) {
				if(vec[i]==vec[j]) {
					flag = true;
					count++;
					temp = vec[i];// gia tri cua bien trung
					break;
				} 
			}
		}
		for(auto i=0; i< vec.size();i++) {
			sum += vec[i];
			if(vec[i]!=temp&&vec[i]%2==0) { // 2 so trung nhau va so con lai chia het cho 2
				flag = false;
			} 
			if(count == 2 && vec[i]%2==0) { // 3 so trung nhau va chia het cho 2
				flag = false;
			} 
		}
		if(count==0&&(sum==2*max)) { 
			flag= false;
		} 
		if(count==0&&(sum!=2*max)) {
			flag = true;
		}
		flag==true?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	solve(t);
	return 0;
} 
