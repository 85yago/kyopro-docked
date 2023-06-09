#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define dump(x) cout << x << endl
#define all(x) (x).begin(), (x).end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
typedef int64_t Int;
typedef long double Ld;

using namespace std;
template <class T>
using Graph = vector<vector<T>>;

const Ld pi = M_PI;
const Int MOD = 1000000007;
const Int INF = 1LL << 62;

Int Floor(Int a, Int b) {
    return (a - (a % b)) / b;
}

template <class T>
inline bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
inline T Gcd(T a, T b) {
    T c;
    while (b) {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}

Int Lcm(Int a, Int b) {
    if (a < b) {
        swap(a, b);
    }

    return a / Gcd(a, b) * b;
}

vector<int> divisor(int n) {
    vector<int> ret;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n)
                ret.push_back(n / i);
        }
    }

    return ret;
}

map<Int, Int> prime_factor(Int n) {
    map<Int, Int> ret;
    for (Int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1) {
        ret[n] = 1;
    }

    return ret;
}

// 二分累乗法
template <typename T>
T modpow(T a, T n, T mod) {
    T ret = 1;

    if (mod == 1) {
        while (n > 0) {
            if (n & 1) {
                ret = ret * a;
            }
            a = a * a;
            n >>= 1;
        }
    } else {
        while (n > 0) {
            if (n & 1) {
                ret = ret * a % mod;
            }
            a = a * a % mod;
            n >>= 1;
        }
    }

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // string s;
    // cin >> s;
    // cout << s << endl;

    cout << "Hello, docker!" << endl;

    return 0;
}
