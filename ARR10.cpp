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
    
    int n; cin >> n;
    int a[n + 1];
    f1(i, n) cin >> a[i];

    int t; cin >> t;
    while(t--){
        // cách while này tương đương với for(int i = 1; i <= t; i++)
        // điều kiện của if, hay while, bản chất là là 1 biến, tức là muốn if, while chạy, thì điều kiện luôn phải > 0
        // nếu điều kiện = 0, thì if, while sẽ không chạy
        // vậy nên t-- nghĩa là cứ chạy, rồi giảm t đi 1, đến khi t = 0, thì dừng

        int x; cin >> x;
        int _min = 2e9;
        f1(i, x){
            _min = min(_min, a[i]);
        }
        cout << _min << endl;
    }
}