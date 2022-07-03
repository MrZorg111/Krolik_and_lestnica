#include <iostream>
// Вариант для нахождения всех способов достич нужной ступеньки.
//При условии что кол-во ступенек равно количеству вариантов.

int jump (int dest_p, int sol = 2) {
    if (dest_p == 0 || dest_p == 1) {
        return 1;
    }
    if(dest_p == 2) {
        return sol;
    }
    jump(dest_p - 1, sol * 2);

}

int main() {
    int n;
    std::cout << "Enter number\n";
    std::cin >> n;
    std::cout << jump(n);

}