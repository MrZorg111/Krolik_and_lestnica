#include <iostream>

int skok (int n, int s = 2) {
    int st_1 = 1, sp = 0, sol = 1;
    if ((sp += st_1) == n) {
        sol++;
        sp = 0;
        return sol + skok(n, s + 1);
    }
    if ((sp += s) == n) {
        sol++;
        sp = 0;
        return sol + skok(n, s + 1);
    }
    if (sp > n) {
        st_1++;
        return skok(n, s = 1);
    }
    if (st_1 == 3 && s == 3) {
        return sol;
    }
}

int main() {
    int n;
    std::cout << "Enter number\n";
    std::cin >> n;
    std::cout << skok(n);
}