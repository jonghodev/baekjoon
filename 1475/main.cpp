#include <bits/stdc++.h>
using namespace std;

int freq[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while (num > 0) {
        freq[num%10] += 1;
        num = num / 10;
    }

    int max = -1;
    for (int i=0; i<10; i++) {
        if (freq[i] > max) {
            if (i == 6 || i == 9) continue;
            max = freq[i];
        }
    }

    int choice1 = max;
    int choice2 = ceil((freq[6] + freq[9]) / 2.0);

    if (choice1 > choice2) {
        cout << choice1;
    } else {
        cout << choice2;
    }
}