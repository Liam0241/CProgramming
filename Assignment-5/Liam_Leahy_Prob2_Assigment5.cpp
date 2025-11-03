#include <iostream>
#include <string>

template<typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2) {
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size1; j++) {
            if (!(list2[i] > list1[j])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int i_list1[3] = {8, -2, 15};
    int i_list2[2] = {7, 20};

    double d_list1[3] = {0.5, -3.2, 4.8};
    double d_list2[3] = {2.1, 5.7, -1.4};

    std::string s_list1[3] = {"zenyata", "tracer", "monkey"};
    std::string s_list2[2] = {"genji", "orisa"};

    std::cout << std::boolalpha;

    std::cout << isGreater(i_list1, i_list2, 3, 2) << "\n";
    std::cout << isGreater(d_list1, d_list2, 3, 3) << "\n";
    std::cout  << isGreater(s_list1, s_list2, 3, 2) << "\n";

    int i_list3[2] = {2, 4};
    int i_list4[2] = {3, 1};
    std::cout << isGreater(i_list3, i_list4, 2, 2) << "\n";

    return 0;
}
