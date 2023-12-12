// Bai 5 : An so
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, c,d,b,a,i;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
    int n;
    cin >> n;
    int a, b, c, d, i;
    
    if (n <= 3) {
        a = 1;
    } else {
        i = 4;
        b = 1;
        c = 1;
        d = 1;

        while (i <= n) {
            a = b + d;
            d = c;
            c = b;
            b = a;
            i++;
        }
    }

    
    cout  << a << endl;
}
