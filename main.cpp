#include <atcoder/all>
#include <bits/stdc++.h>
#include <boost/range/irange.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/algorithm/string.hpp>

using boost::is_any_of;
using boost::algorithm::join;         // join(src_string_vector, s) で文字の配列を区切り文字列sで結合
using boost::algorithm::replace_all;  // replace_all(s,a,b) でs内のaをすべてbに置換(破壊的)
using boost::algorithm::split;        // split(dst_string_vector, s, is_any_of(',')) でsをカンマ区切りで分割
using boost::multiprecision::cpp_int; // 多倍長整数

using namespace std;
using namespace atcoder;
#define ALL(v) (v).begin(), (v).end()
#define rep(i, n) for (ll i = 0, __##i##_length = (n); i < __##i##_length; i++)
#define rep_reverse(i, n) for (ll i = (n)-1; 0 <= i; i--)
#define FOR(i, from, to) for (ll i = (from), __##i##_end = (to); i < __##i##_end; i++)
#define FOR_REVERSE(i, from, to) for (ll i = (to)-1, __##i##_end = (from); __##i##_end <= i; i--)
#define foreach(e, v) for (const auto e : (v))
#define vfree(v) std::vector<int>().swap(v)
#define DEBUG(x) cout << #x << " = " << (x) << endl

using ll = int64_t;
using llv = vector<ll>;
using llvv = vector<llv>;

int main(int argc, char const *argv[])
{
    while (1)
    {
        ll N;
        cin >> N;
        if (N == 0)
        {
            return 0;
        }
        vector<ll> a(N);
        rep(i, N)
        {
            cin >> a[i];
        }

        ll ans = -1;

        rep(i, N)
        {
            if (ans < a[i])
            {
                ans = a[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
