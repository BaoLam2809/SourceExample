// Bai 3 : In day so xuat hien k lan tro len
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  	ll n,k;
	cin >> n >> k;
	set<long long> s;
	multiset<long long> se;
	vector<long long > v;
	for(int i = 0 ; i < n;i++){
		ll tmp;
		cin >> tmp;
		s.insert(tmp);
		se.insert(tmp);
	}
	auto itse = se.begin();
	for(auto it = s.begin(); it != s.end();it++){
		if(se.count(*it) >= k){
			v.push_back(*it);
		}
	}
	
	if(v.empty()){
		cout << "NO" ;
	}
	else{
		for(int x : v){
			cout << x << " ";
		}
	}
}
