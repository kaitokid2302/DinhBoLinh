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


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    ll a, b; cin >> a >> b;
    cout << a + b + a*b;

    /*
    Đề bài cho a, b thuộc kiểu int, nhưng giới hạn là <= 10^9
    nên khi a*b sẽ vượt quá giới hạn của kiểu int, là long long
    nên bình thường ta sẽ
    int a, b; cin >> a >> b;
    ll res = ll(a)*b + a + b;
    Nhưng cách này lâu, nên viết luôn ll cho nhanh
    */
}