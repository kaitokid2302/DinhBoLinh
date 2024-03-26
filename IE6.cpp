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

ll calculateDateBetween(int date1, int month1, int year1, int date2, int month2, int year2){
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll date, month, year;
    cin >> date >> month >> year;

    ll res = calculateDateBetween(date, month, year, 26, 3, 2024);
    string d[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << d[(res + 1) % 7];
}