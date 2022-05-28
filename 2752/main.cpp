/**
 * https://www.acmicpc.net/problem/2752
 */

#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f;
    d = min({a, b, c});
    e = max({a, b, c});
    f = a + b + c - d - e;
    cout << d << ' ' << f << ' ' << e;
}