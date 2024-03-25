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

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    ll a[n + 1];
    f1(i, n) cin >> a[i];

    int res = 0;
    f1(i, n){
        f1(j, n){
            if(i != j && i < j){
                if(gcd(a[i], a[j]) > 1) res++;
            }
        }
    }
    cout << res;
}

// Bài này quan trọng xây được gcd, cần phải hiểu rõ tại sao lại viết hàm gcd như vậy, và tại sao dùng đệ quy, bắt buộc phải hiểu rõ cách hoạt động của gcd
