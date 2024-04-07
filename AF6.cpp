#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <random>
#include <cstdlib>
#include <ctime>
#include <tuple>
#define f0(i, n) for (int i = 0; i < (n); i++)
#define f1(i, n) for (int i = 1; i <= (n); i++)
#define f2(i, n) for (int i = 2; i <= (n); i++)
#define mp make_pair

using namespace std;
typedef long long ll;
const int mod = 1000000007;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll a, b;
    cin >> a >> b;

    ll x1 = 0, x2 = 0;
    while(a || b){
        x1 += (a % 10);
        x2 += (b % 10);
        a /= 10;
        b /= 10;
    }
    cout << (x1*x2)/gcd(x1, x2);
}

// công thức BCNN(a, b) = a*b/UCLN(a, b)
// Khi 1 trong 2 số a hoặc b vẫn lớn hơn 0, thì while vẫn chạy