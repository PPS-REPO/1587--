#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }
    std::vector<int> pc;
    int nlw = 0;
    for (int i : l) {
        pc.push_back(i);
        std::sort(pc.begin(), pc.end());
        auto it = std::find(pc.begin(), pc.end(), i);
        int j = std::distance(pc.begin(), it);
        if (j >= m) nlw++;
    }
    std::cout << nlw << std::endl;
    return 0;
}