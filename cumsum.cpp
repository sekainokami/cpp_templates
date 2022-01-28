#include <iostream>

// C++ 11 Use parameter pack
int cumsum11() {
    return 0;
}

template <typename T, typename ...Ts>
int cumsum11(T t, Ts... ts) {
    return t + cumsum11(ts...);
}

// C++ 17 Use fold expressions
template <typename ...Ts>
int cumsum17(Ts... ts) {
    return (... + ts);
}

int main() {
    std::cout << cumsum11(1,2,3,4,5) << std::endl;
    std::cout << cumsum17(1,2,3,4,5) << std::endl;

}