// Bài 2 : Tìm mối liên hệ
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n;
	cin >> n;
	if( n % 2 == 0){
		cout <<  (n / 2) * (n - 1);
	}
	else{
		cout << (n - 1 / 2) * n;
	}
}
