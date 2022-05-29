/**
 * https://www.acmicpc.net/problem/2753
 */
#include <bits/stdc++.h>
using namespace std;

int input = 0, sum = 0;
vector<int> nums(9);

int Solution() {
    for (int a = 0; a < 8; a++) {
        for (int b = a + 1; b < 9; b++) {
            if (sum - (nums[a] + nums[b]) == 100) {
                nums[a] = -1;
                nums[b] = -1;
                return 0;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);


    for (int i = 0; i < 9; i++) {
        cin >> input;
        nums[i] = input;
        sum += input;
    }

    Solution();

    sort(nums.begin(), nums.end());
    for (int i=2; i<9; i++) {
        cout << nums[i] << "\n";
    }
}
