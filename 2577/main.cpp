#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int num = a * b * c;
    for (auto c : to_string(num)) {
        int n = c - '0';
        freq[n] += 1;
    }

    for (int n : freq) {
        cout << n << '\n';
    }
}
