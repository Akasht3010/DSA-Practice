#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        std::sort(arr.begin(), arr.end());

        int minSum = 0;
        for (int i = 0; i < n - m; i++) {
            minSum += arr[i];
        }

        int maxSum = 0;
        for (int i = m; i < n; i++) {
            maxSum += arr[i];
        }

        int difference = maxSum - minSum;
        std::cout << difference << std::endl;
    }

    return 0;
}
