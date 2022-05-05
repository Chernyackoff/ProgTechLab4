#include <iostream>
#include "InsertionSort.cpp"
#include "correct_input.cpp"

template<typename T>
void compare(Vector<T> &v1, Vector<T>&v2 ) {
    auto t = v1 > v2;
    std::cout << "v1 > v2:\n" << t << '\n';
    t = v1 < v2;
    std::cout << "v1 < v2:\n" << t << '\n';
}

int main() {
    int choice, v;
    Vector<int> v1, v2;
    while (true) {
        std::cout << "1. Add item\n"
                     "2. Get by index\n"
                     "3. Compare vectors\n"
                     "4. Print\n"
                     "5. Sort\n"
                     "6. Exit\n";
        choice = correct_input<int>();

        std::cout << "Choose vector (1 or 2):\n";
        v = correct_input<int>();
        while (v < 1 || v > 2) {
            std::cout << "Wrong!";
            v = correct_input<int>();
        }
        switch (choice) {
            case 1:
                std::cout << "Input item:\n";
                (v == 1) ? std::cin >> v1 : std::cin >> v2;
                break;
            case 2:
                int i;
                std::cout << "Input index:\n";
                i = correct_input<int>();
                try {
                    (v == 1) ? std::cout << v1[i] : std::cout << v2[i];
                }
                catch (const char *t) {
                    std::cout << t << '\n';
                }
                break;
            case 3:
                compare(v1, v2);
                break;
            case 4:
                (v == 1)? std::cout << v1 << '\n' : std::cout << v2 << '\n';
                break;
            case 5:
                (v == 1) ? insertionSort(v1) : insertionSort(v2);
                break;
            case 6:
                return 0;
            default:
                std::cout << "Wrong input, try again!" << std::endl;
                break;

        }
    }
}
