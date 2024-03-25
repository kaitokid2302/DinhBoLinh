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

    ll a, b, c;
    cin >> a >> b >> c;

    if(c*b == a || a*c == b || b*a == c){
        cout << "/";
    }
    else{
        cout << "NOSOL";
    }

    /*
    a/b = c
    b/c = a
    c/a = b

    Bài này nếu kiểm tra a/b == c thì sẽ bị sai, vì a/b là phép chia số nguyên, nên kết quả sẽ là số nguyên
    ví dụ a = 5, b = 2, c = 2, thì nếu kiểm tra cách đó 5/2 sẽ bằng 2, và c cũng bằng 2
    nhưng thực tế 5/2 = 2,5, nên cách kiểm tra này sẽ sai
    Vì thế ta sẽ nhân ngược lại: 
    a/b = c => a = b*c
    b/c = a => b = c*a
    c/a = b => c = a*b

    Làm cách này, ta sẽ tránh được số thập phân, và kết quả sẽ chính xác
    Nhưng 1 vấn đề là a, b, c <= 10^9
    Tức là tích 2 số có thể lên tới 10^18, nên ta phải dùng kiểu long long 
    nhưng ta vẫn có thể làm theo cách sau
    int a, b, c;
    if(ll(a)*ll(b) == c || ll(b)*ll(c) == a || ll(c)*ll(a) == b){
        cout << "/";
    }
    else{
        cout << "NOSOL";
    }
    Như này vẫn sẽ chính xác, tiết kiệm bộ nhớ hơn, nhưng dài dòng, dễ nhầm lẫn
    */
}