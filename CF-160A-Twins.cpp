#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // Fast I/O: Makes cin/cout as fast as scanf/printf
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    vector<int> coins(t);

    for (int i = 0; i < t; i++) {
        int value;
        cin >> value;
        coins.push_back(value);
    }

    int total = 0;
    for (int coin : coins) total += coin;
    int our_sum = 0;
    int coins_taken = 0;

    sort(coins.begin(), coins.end(), greater<int>());
    for (int i = 0; i < t; i++) {
        our_sum += coins[i];
        coins_taken++;
        if (our_sum > total - our_sum) {
            cout << coins_taken << '\n';
            return 0;
        }
    }
}