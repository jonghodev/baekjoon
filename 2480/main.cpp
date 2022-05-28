/**
 * https://www.acmicpc.net/problem/2753
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, price;
    cin >> a >> b >> c;

    if (a==b && b==c) price = 10000 + a * 1000;
    else if (a==b || a==c) price = 1000 + a * 100;
    else if (b==c) price = 1000 + b * 100;
    else price = max({a, b, c}) * 100;
    cout << price;
}
