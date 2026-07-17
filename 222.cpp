1、原始的。



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0;
	cin >> n;
	vector<int> vec(n+1);
	for(int i=1;i<=n;i++)cin>>vec[i];
	
	for(int i=1;i<=n;i++){
		int flag = 0;
		for(int j=1;j<=n-i;j++){
			if(vec[j]>vec[j+1]) {
				swap(vec[j],vec[j+1]);
				flag = 1;
			}
		}
		if(!flag) {cnt = i;break;}		
	}
	cout<<cnt<<endl;
	return 0;
}


