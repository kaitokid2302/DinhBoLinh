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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    ll res = 0;
    ll cur = 1;
    f1(i, n){
        cur *= i;
        cur %= mod;
        res += cur;
        res %= mod;
    }
    cout << res;
}

// a*b % mod = (a % mod) * (b % mod) % mod
// (a + b) % mod = (a % mod + b % mod) % mod
// (a - b) % mod = (a % mod - b % mod + mod) % mod
