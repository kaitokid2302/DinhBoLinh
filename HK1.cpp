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

    ll a, b; cin >> a >> b;
    ll x = gcd(a, b);
    a /= x;
    b /= x;
    cout << a << " " << b;
}

// rút gọn phân số về cơ bản chỉ cần chia cho ước chung lớn nhất của tử và mẫu