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

    int a[5];
    f0(i, 5){
        cin >> a[i];
    }
    sort(a, a + 5);
    cout << a[1];
}

// bài này cách đơn giản nhất chỉ có sort mảng và in ra phần tử thứ 2
// lưu ý sort là hàm thuộc thư viện algorithm, cần phải include nó vào thì mới dùng được