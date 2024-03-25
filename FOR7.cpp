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
const int N = 1e6 + 2;

ll a[N], n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i <= n; i++){
        a[i] = 2*a[i - 1] - a[i - 2];
    }
    cout << a[n];

    // Mảng bắt đầu từ 0, nghĩa là dùng được từ a[0], a[1], a[2], ......
    // a[0] mình có thể không dùng, dùng từ a[1], bởi vì làm vậy sẽ dễ hơn, vì đề bài bắt in ra u(n), nên mình cứ in ra a[n] luôn
    // nếu mình dùng cách cũ, bắt đầu từ 0, thì phải viết là a[n - 1], như vậy cũng được, nhưng dễ nhầm lẫn
}