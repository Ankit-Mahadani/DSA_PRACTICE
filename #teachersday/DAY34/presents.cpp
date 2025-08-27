#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    std::vector<int> answer(n);

    for (int i = 0; i < n; ++i) {
        answer[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << answer[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}