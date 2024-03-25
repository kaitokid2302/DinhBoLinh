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
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define f2(i, n) for (int i = 2; i <= n; i++)
#define mp make_pair

using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int N = 1e5 + 2;

int n, k;
ll a[N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; 
    cin >> n;
    f1(i, n) cin >> a[i];
    cin >> k;
    ll res = 0;
    f1(i, k) res += a[i];
    cout << res;

    // đề bài nói là các số sẽ là 64 bit, nghĩa là gì?
    // nghĩa là giới hạn của số sẽ là 2^64, tức là gần bằng 10^19, nên ta sẽ dùng kiểu long long để lưu trữ
    // Khi nói đến số 32 bit, ta nghĩ ngay đến kiểu int, khi nói đến số 64 bit, ta nghĩ ngay đến kiểu long long
    
}