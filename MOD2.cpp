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
    
    ll a, b, c;
    cin >> a >> b >> c;
    a %= c;
    b %= c;
    cout << (a * b) % c;
}

// a*b % mod = (a % mod) * (b % mod) % mod
// khi a%mod, nó sẽ < mod, khi nhân với b%mod, nó cũng sẽ < mod
// tức là a và b sau khi mod, rồi lấy tích, giá trị tối đa sẽ < mod^2
// mà c chính là mod, giới hạn đề bài c <= 10^9, nên a*b % c không bao giờ vượt quá 10^18, tức là không bao giờ vượt quá kiểu dữ liệu long long