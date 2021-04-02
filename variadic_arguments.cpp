#include <iostream>

// Base case
static inline void print() {}

template <typename T, typename ... Ts>
static inline void print(T head, Ts ... tail) {
    std::cout << head << std::endl;
    print(tail...);
}

int main() {
    print(1,2,3,4,5);
}