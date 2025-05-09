#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > m) {
            break;
        }
        ans++;
        m -= a[i];
    }
    
    std::cout << ans << std::endl;
    return 0;
}