#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<int> z_function(const std::string& S) {
    int l = 0;
    int r = 0;
    int n = S.length();
    std::vector<int> z(n, 0);

    for (int i = 1; i < n; ++i) {
        if (i <= r) {
            z[i] = std::min(r - i + 1, z[i - l]);
        }

        while (i + z[i] < n && S[z[i]] == S[i + z[i]]) {
            ++z[i];
        }

        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }

    z[0] = n;
    return z;
}

std::string get_palindrome(const std::string& s1) {
    std::string s = s1 + "#" + std::string(s1.rbegin(), s1.rend());
    std::vector<int> z = z_function(s);

    int maxa = 0;
    for (int i = 0; i < z.size(); ++i) {
        if (z[i] == z.size() - i) {
            maxa = z[i];
            break;
        }
    }

    std::string theta = s1.substr(maxa);
    return std::string(theta.rbegin(), theta.rend()) + s1;
}

int main() {
    std::string s = "aabbaabb";
    std::string palindrome = get_palindrome(s);
    std::cout << palindrome << std::endl;

    return 0;
}
