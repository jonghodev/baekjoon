/**
 * https://www.acmicpc.net/problem/2752
 */
#include <bits/stdc++.h>
using namespace std;

int num[5], total;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i=0; i<5; i++) cin >> num[i];
    for (int i=0; i<5; i++) total += num[i];


    sort(num, num+5);

    cout<< total / 5 << "\n" << num[2];
}
