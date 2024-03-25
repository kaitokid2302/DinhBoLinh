#include <iostream>
#include <algorithm>

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
    
    int a, b, c; cin >> a >> b >> c;
    cout << min(a, min(b, c));

    // hàm min thuộc về algorithm nên chỉ cần include algorithm là có thể dùng được
}