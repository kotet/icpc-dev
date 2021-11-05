#include <atcoder/all>
#include <bits/stdc++.h>
#include <boost/range/irange.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/algorithm/string.hpp>

using boost::irange; // for文を for (ll i : irange(0,N)) みたいに書ける
using boost::multiprecision::cpp_int; // 多倍長整数
using boost::is_any_of;
using boost::algorithm::split; // split(dst_string_vector, s, is_any_of(',')) でsをカンマ区切りで分割
using boost::algorithm::join; // join(src_string_vector, s) で文字の配列を区切り文字列sで結合
using boost::algorithm::replace_all; // replace_all(s,a,b) でs内のaをすべてbに置換(破壊的)

using namespace std;
using namespace atcoder;
using ll = long long;

int main(int argc, char const *argv[])
{
    cout << "hello" << endl;
    fenwick_tree<ll> fw(20);
    return 0;
}
