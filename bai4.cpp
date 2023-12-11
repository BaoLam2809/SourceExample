// Bai 4 : Doi so nhi phan sang he thap phan
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef int64_t so;

int solve(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << solve(n) ;
    return 0;
}
