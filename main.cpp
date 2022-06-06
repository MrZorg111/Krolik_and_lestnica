#include <iostream>

int skok (int n, int s = 2) {
    int st_1 = 1, sp = 0, sol = 1;
    //std::cout << sol << "\n";
    if ((sp += st_1) == n) { // 0 += 1 < 4
        sol++;
        sp = 0;
        //std::cout << sol;
        return sol + skok(n, s + 1);
    }
    //std::cout << "Suda!\n";
    if ((sp += s) == n) { // 1 += 2 < 4
        sol++;
        sp = 0;
        //std::cout << "Suda!\n";
        return sol + skok(n, s + 1);
    }

    if (sp > n) {
        st_1++;
        //std::cout << "Suda!\n";
        return skok(n, s = 1);
    }
    if (st_1 == 3 && s == 3) {
        //std::cout << "Suda!\n";
        return sol;
    }

}

int main() {
    int sd;
    std::cout << "Enter number\n";
    std::cin >> sd;
    std::cout << skok(sd);
}