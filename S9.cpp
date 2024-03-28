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
    
    string s; cin >> s;
    int d[26] = {0};

    f0(i, s.size()){
        d[s[i] - 'a']++;
    }
    int cnt = 0;
    f0(i, 26){
        if(d[i] > 0){
            cnt++;
        }
    }
    cout << cnt;

    // d là mảng đánh dấu
    // Vì đề bài đảm bảo chỉ có ký tự latin thường nên ta có thể dùng mảng d[26] để đánh dấu
    // khi viết s[i] - 'a', giá trị này sẽ nằm trong khoảng từ 0 đến 25, nên ta có thể dùng mảng d[26] để đánh dấu
    // khi viết int d[26] = {0}; thì mảng d sẽ được khởi tạo tất cả các phần tử bằng 0

}