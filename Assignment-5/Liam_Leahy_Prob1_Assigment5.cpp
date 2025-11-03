#include <iostream>
#include <string>

template<typename T>
T getMin(const T array[], int size) {
    T min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int i_array[4] = {1, 3, -3, 80};
    double d_array[4] = {1.57, 3.14159, -360, 0};
    std::string s_array[4] = {"abcd", "ab", "Adad", "Cat"};

    std::cout << getMin(i_array, 4) << std::endl;
    std::cout << getMin(d_array, 4) << std::endl;
    std::cout << getMin(s_array, 4) << std::endl;

    return 0;
}
