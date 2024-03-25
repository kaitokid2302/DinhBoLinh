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
    
    int k; cin >> k;
    string s; cin >> s;

    s = " " + s;
    int n = s.length() - 1;
    // Thực ra mảng bắt đầu bằng 0, nhưng đễ dễ sử dụng, và cũng do thói quen mỗi người, nên trong bài này, mảng sẽ bắt đầu từ 1
    // n là độ dài của chuỗi s, nên sẽ bắt đầu từ 1, và kết thúc ở n
    // thay vì for(int i = 0; i < n; i++) thì ta sẽ for(int i = 1; i <= n; i++)

    f1(i, n){
        int x = char(s[i]) - 'a';
        x -= k;
        if(x < 0){
            x += 26;
        }
        cout << char(x + 'a');
    }
}