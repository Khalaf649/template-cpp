#include<iostream>
#include<bitset>
#include<cmath>
#include<algorithm>
#include<map>
#include<stack>
#include <cstring>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<vector>
#include<set>
#include<iomanip>
#include<string>
#define INF 100000000
#define pi 3.141592654
#define graph vector<vector<int>>
#define hashset map<int,unordered_set<int>>// faster to cheeck if the pair is visited or Not

using namespace std;
void fast()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}
#define ll long long
#define  all(v) v.begin(),v.end()
#define  rall(v) v.rbegin(),v.rend()
char** create_grid(char** array, int R, int C, int val = 0)
{
    array = new char* [R];
    for (int i = 0; i <= R - 1; i++)
        array[i] = new char[C];
    for (int i = 0; i <= R - 1; i++)
        for (int j = 0; j <= C - 1; j++)
            array[i][j] = val;
    return array;
}
double get_slope(ll x1, ll y1, ll x2, ll y2)
{
    return double(y1 - y2) / (x1 - x2);
}
double calc_distance(double x1, double y1, double x2, double y2)
{
    double ans = pow(x1 - x2, 2) + pow(y1 - y2, 2);
    return sqrt(ans);
}
ll get_divisors(ll num)
{

    ll val = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            val++;
            if (i * i != num)
                val++;
        }

    }

    return val;
}
bool is_valid(int i,int j,int r,int c)
{
    return i>=0&&i<r&&j>=0&&j<c;
}
ll mod = 1e9 + 7;
ll modular_power(ll base, ll power)
{
    ll val;
    if (power == 0)
        return 1;
    if (power % 2 == 0)
    {
        val = modular_power(base, power / 2);
        val *= val;
        val %= mod;

    }
    else
    {
        val = modular_power(base, power - 1);
        val *= base % mod;
        val %= mod;
    }
    return val;
}
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
ll count_digits(ll num)
{
    if (!num)
        return 0;
    else
        return 1 + count_digits(num / 10);
}
ll fact(ll n)
{
    if (!n)
        return 1;
    return n * fact(n - 1);
}
ll ncr(ll n, ll r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
ll sum_digits(ll num)
{
    ll sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;

}
void solve()
{

}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fast();
    int t = 1;
    while (t--)
    {
        solve();
    }

}